/*
    Copyright(C) 2024 Tyler Crockett | Macdaddy4sure.com

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissionsand
    limitations under the License.
*/

#include "AugmentedIntelligence.hpp"
#include "QA.hpp"
#include "NLP.hpp"
#include "NLU.hpp"
#include "Settings.hpp"

using namespace std;

void _QA::BERTEquivalence()
{
    std::string model_path = "D:/_test5_bert/";

    // Initialize TensorFlow
    TF_Status* status = TF_NewStatus();
    // Call LoadGraph to load the model into a graph
    //TF_Graph* graph = LoadGraph(model_path.c_str(), status);
    TF_Graph* graph = TF_NewGraph();
    TF_SessionOptions* options = TF_NewSessionOptions();
    TF_Buffer* run_opts = nullptr;
    const char* tags = "serve";
    TF_Session* session = TF_LoadSessionFromSavedModel(options, nullptr, model_path.c_str(), &tags, 1, graph, nullptr, status);

    if (TF_GetCode(status) == TF_OK)
    {
        printf("Model loaded successfully\n");
    }
    else
    {
        printf("Error loading model\n");
    }

    // Define input operation
    std::vector<TF_Output> input_ops {
        { TF_GraphOperationByName(graph, "serving_default_inputs"), 0 },
        { TF_GraphOperationByName(graph, "serving_default_inputs_1"), 0 },
    };

    // Define output operations
    std::vector<TF_Output> output_ops {
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 0 },
    };

    std::vector<TF_Tensor*> input_tensors = { NULL, NULL };
    TF_Tensor* output_tensors = NULL;

    if (TF_GetCode(status) != TF_OK)
    {
        fprintf(stderr, "Error: %s\n", TF_Message(status));
        // Handle error appropriately
    }

    // Run the session
    TF_SessionRun(session, nullptr,
        input_ops.data(), input_tensors.data(), input_tensors.size(),
        output_ops.data(), &output_tensors, output_ops.size(),
        nullptr, 0, nullptr, status);

    if (TF_GetCode(status) == TF_OK)
    {
        printf("Session run successfully\n");
    }
    else
    {
        fprintf(stderr, "Session run error: %s\n", TF_Message(status));
    }

    // Cleanup
    TF_DeleteTensor(input_tensors[0]);
    TF_DeleteTensor(input_tensors[1]);
    TF_DeleteTensor(output_tensors);
    TF_DeleteSession(session, status);
    TF_DeleteSessionOptions(options);
    TF_DeleteStatus(status);
}