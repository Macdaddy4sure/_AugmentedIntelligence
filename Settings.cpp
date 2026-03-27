/*
	Copyright(C) 2025 Tyler Crockett | Macdaddy4sure.ai

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
#include "Database Functions.hpp"
#include "Variables.hpp"
#include "Settings.hpp"
#include "Utilities.hpp"

using namespace std;

void _Settings::Settings()
{
	MYSQL* conn;
	string input;
	string input2;

	bool boolean = false;
	bool boolean2 = false;

	// General Settings
	//terms_conditions = _Settings::GetTermsConditions();
	//working_memory_enabled = _Settings::GetWorkingMemoryEnable();
	//working_memory_limit = _Settings::GetWorkingMemoryLimit();
	//short_term_memory_enabled = _Settings::GetShortTermMemoryEnabled();
	//short_term_memory_time = _Settings::GetShortTermMemoryTime();
	//long_term_memory_enabled = _Settings::GetLongTermMemoryEnabled();
	//long_term_memory_limit = _Settings::GetLongTermMemoryLimit();
	//sound_memory = _Settings::GetSoundMemoryEnable();
	//speech_memory_enabled = _Settings::GetSpeechMemoryEnabled();
	//speech_recognition = _Settings::GetSpeechRecognitionEnable();
	//speech_lie_detection = _Settings::GetSpeechLieDetectionEnabled();
	//sound_directory = _Settings::GetSoundDirectory();
	//sound_codec = _Settings::GetSoundCodec();
	//sound_bitrate = _Settings::GetSoundBitrate();
	//speech_directory = _Settings::GetSpeechDirectory();
	//ethics_check_enabled = _Settings::GetEthicsCheckEnable();
	//cuda_accelleration = _Settings::GetCUDAAccellerationEnable();
	//cuda_accelleration_remote_enabled = _Settings::GetCUDAAccellerationRemoteEnable();
	//cuda_accelleration_remote_hostname = _Settings::GetCUDAAccellerationRemoteHostname();
	//cuda_accelleration_remote_cores = _Settings::GetCUDAAccellerationRemoteCores();
	//tensor_accelleration = _Settings::GetTensorAccelleration();
	//tensor_accelleration_remote_enabled = _Settings::GetTensorAccellerationRemoteEnabled();
	//tensor_accelleration_remote_hostname = _Settings::GetTenorAccellerationRemoteHostname();
	//tensor_accelleration_remote_cores = _Settings::GetTensorAccellerationRemoteCores();
	//vision_object_detection = _Settings::GetObjectDetectionEnable();
	//vision_object_detection_cuda = _Settings::GetObjectDetectionCUDAEnabled();
	//vision_object_detection_remote_enabled = _Settings::GetObjectDetectionRemoteEnabled();
	//vision_object_detection_server_hostname = _Settings::GetObjectDetectionRemoteHostname();
	//visual_analysis = _Settings::GetVisualReasoningEnable();
	//vision_memory = _Settings::GetVisualMemoryEnable();
	//vision_memory_directory = _Settings::GetVisionDirectory();
	//camera1_enabled = _Settings::GetCamera1Enable();
	//camera1 = _Settings::GetCamera1();
	//camera1_fps = _Settings::GetCamera1FPS();
	//camera1_resolution = _Settings::GetCamera1Resolution();
	//camera2_enabled = _Settings::GetCamera2Enable();
	//camera2 = _Settings::GetCamera2();
	//camera2_fps = _Settings::GetCamera2FPS();
	//camera2_resolution = _Settings::GetCamera2Resolution();
	//computer_use = _Settings::GetComputerUseEnable();
	//computer_monitor_recognition = _Settings::GetComputerMonitorRecognitionEnabled();
	//computer_owned_recognition = _Settings::GetComputerOwnedRecognitionEnabled();
	//reading = _Settings::GetReadingEnable();
	////reading_fallacy_check = _Settings::GetReadingFallacyCheckEnable();
	//ffmpeg_location = _Settings::GetFFMpegLocation();
	//microphone1_enabled = _Settings::GetMicrophone1Enable();
	//microphone1_device_id = _Settings::GetMicrophone1Device();
	//microphone2_enabled = _Settings::GetMicrophone2Enable();
	//microphone2_device_id = _Settings::GetMicrophone2Device();
	//news_watching = _Settings::GetNewsWatchingEnable();
	//action_commands = _Settings::GetActionWatchingEnable();
	//needs_detection = _Settings::GetNeedsWatchingEnable();
	//navigation_detection = _Settings::GetNavigationDetectionEnable();
	//social_needs_detection = _Settings::GetSocialNeedsDetectionEnable();

	//// MySQL Settings
	//mysql_hostname = _Settings::GetMySQLHostname();
	//mysql_username = _Settings::GetMySQLUsername();
	//mysql_password = _Settings::GetMySQLPassword();
	//mysql_vision_database = _Settings::GetMySQLVisionDatabase();
	//mysql_sound_database = _Settings::GetMySQLSoundDatabase();
	////mysql_speech_database = _Settings::GetMySQLSpeechDatabase();
	//mysql_working_memory_database = _Settings::GetMySQLWorkingMemoryDatabase();
	//mysql_short_term_memory_database = _Settings::GetMySQLShortTermMemoryDatabase();
	//mysql_long_term_memory_database = _Settings::GetMySQLLongTermMemoryDatabase();

	//// Computer Settings
	//private_computer = _Settings::GetPrivateComputer();
	//computer_hostname = _Settings::GetComputerHostname();
	//computer_username = _Settings::GetComputerUsername();
	//computer_password = _Settings::GetComputerPassword();

	//// FTP Settings
	//ftp_enabled = _Settings::GetFTPEnabled();
	//ftp_hostname = _Settings::GetFTPHostname();
	//ftp_username = _Settings::GetFTPUsername();
	//ftp_password = _Settings::GetFTPPassword();
	//ftp_vision_directory = _Settings::GetVisionFTPDirectory();
	//ftp_sound_directory = _Settings::GetSoundFTPDirectory();

	while (!boolean)
	{
		system("cls");

		conn = mysql_init(0);
		conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), NULL, 3306, NULL, 0);

		boolean2 = false;

		cout << endl;
		cout << "======================== Settings ========================" << endl;
		cout << "| 1. Enable/Disable Working Memory                       |" << endl;
		cout << "| 2. Enable/Disable Short Term Memory                    |" << endl;
		cout << "| 3. Enable/Disable Long Term Memory                     |" << endl;
		cout << "| 4. Enable/Disable Vision Memory                        |" << endl;
		cout << "| 5. Enable/Disable Sound Memory                         |" << endl;
		cout << "| 6. Enable/Disable Speech Memory                        |" << endl;
		cout << "| 7. Enable/Disable Ethics Check                         |" << endl;
		cout << "| 8. Enable/Disable CUDA Accelleration                   |" << endl;
		cout << "| 9. Enable/Disable CUDA Accelleration Remote            |" << endl;
		cout << "| 10. Enable/Disable Tensor Accelleration                |" << endl;
		cout << "| 11. Enable/Disable Tensor Accelleration Remote         |" << endl;
		cout << "| 12. Enable/Disable Object Detection                    |" << endl;
		cout << "| 13. Enable/Disable Object Detection CUDA               |" << endl;
		cout << "| 14. Enable/Disable Object Detection Remote             |" << endl;
		cout << "| 15. Enable/Disable Visual Analysis                     |" << endl;
		cout << "| 16. Enable/Disable Sound Reasoning                     |" << endl;
		cout << "| 17. Enable/Disable Reading Reasoning                   |" << endl;
		cout << "| 18. Enable/Disable Speech Reasoning                    |" << endl;
		cout << "| 19. Enable/Disable Camera 1                            |" << endl;
		cout << "| 20. Enable/Disable Camera 2                            |" << endl;
		cout << "| 21. Enable/Disable Microphone 1                        |" << endl;
		cout << "| 22. Enable/Disable Microphone 2                        |" << endl;
		cout << "| 23. Enable/Disable Speech Recognition                  |" << endl;
		cout << "| 24. Enable/Disable Sound Analysis                      |" << endl;
		cout << "| 25. Enable/Disable Computer Use                        |" << endl;
		cout << "| 26. Enable/Disable Computer Monitor Recognition        |" << endl;
		cout << "| 27. Enable/Disable Computer Owned Recognition          |" << endl;
		cout << "| 28. Enable/Disable Reading                             |" << endl;
		//cout << "| 28. Enable/Disable Reading Fallacy Checking            |" << endl;
		//cout << "| 29. Enable/Disable Listening Fallacy Checking          |" << endl;
		//cout << "| 30. Enable/Disable Listening Bias Checking             |" << endl;
		//cout << "| 31. Enable/Disable Listening Literature Device Checking|" << endl;
		//cout << "| 32. Enable/Disable Listening Axiom Checking            |" << endl;
		//cout << "| 33. Enable/Disable Listening Abuse Checking            |" << endl;
		//cout << "| 34. Enable/Disable Listening Law Checking              |" << endl;
		//cout << "| 35. Enable/Disable Listening Dictionary Checking       |" << endl;
		cout << "| 37. Set Vision Memory Directory                        |" << endl;
		cout << "| 38. Set Sound Memory Directory                         |" << endl;
		cout << "| 39. Set Working Memory Limit                           |" << endl;
		cout << "| 40. Set Working Memory Location                        |" << endl;
		cout << "| 41. Set Short Term Memory Limit                        |" << endl;
		cout << "| 42. Set Short Term Memory Directory                    |" << endl;
		cout << "| 43. Set Long Term Memory Limit                         |" << endl;
		cout << "| 44. Set Long Term Memory Directory                     |" << endl;
		cout << "| 45. Set CUDA Accelleration Remote Hostname             |" << endl;
		cout << "| 46. Set CUDA Accelleration Remote Cores                |" << endl;
		cout << "| 47. Set Tensor Accelleration Remote Hostname           |" << endl;
		cout << "| 48. Set Tensor Accelleration Remote Cores              |" << endl;
		cout << "| 49. FFmpeg Location                                    |" << endl;
		cout << "| 50. Tensorflow Saved Model Location                    |" << endl;
		cout << "| 52. Tensorflow Model Labels                            |" << endl;
		cout << "| 53. Whisper Model Location                             |" << endl;
		cout << "| 54. Set Camera 1 Device                                |" << endl;
		cout << "| 55. Set Camera 1 FPS                                   |" << endl;
		cout << "| 56. Set Camera 1 Resolution                            |" << endl;
		cout << "| 57. Set Camera 2 Device                                |" << endl;
		cout << "| 58. Set Camera 2 FPS                                   |" << endl;
		cout << "| 59. Set Camera 2 Resolution                            |" << endl;
		cout << "| 60. Set Microphone 1 Device Name                       |" << endl;
		cout << "| 61. Set Microphone 1 Device ID                         |" << endl;
		cout << "| 62. Set Microphone 2 Device Name                       |" << endl;
		cout << "| 63. Set Microphone 2 Device ID                         |" << endl;
		cout << "| 64. Set Sound Codec                                    |" << endl;
		cout << "| 65. Set Sound Bitrate                                  |" << endl;
		cout << "| 66. Set Sound Sample Rate                              |" << endl;
		cout << "| 67. Set Sound Channels                                 |" << endl;
		cout << "| 68. Set Sound Bits Per Channel                         |" << endl;
		cout << "| 69. Set Sound Recording Interval                       |" << endl;
		cout << "| 70. Speech Commands Activation Keyword                 |" << endl;
		cout << "| 71. Speech Commands Terminator Keyword                 |" << endl;
		cout << "| 72. Enable/Disable News Watching Scraper               |" << endl;
		cout << "| 73. Enable/Disable Actions Detction                    |" << endl;
		cout << "| 74. Enable/Disable Needs Detection                     |" << endl;
		cout << "| 75. Enable/Disable Navigation Detection                |" << endl;
		cout << "| 76. Enable/Disable Social Needs Detection              |" << endl;
		cout << "| 77. LLM Thought Memory                                 |" << endl;
		cout << "| 78. Whisper Threads                                    |" << endl;
		cout << "| 79. Tensorflow Object Detection Score                  |" << endl;
		cout << "| 80. Camera 1 Focal Length                              |" << endl;
		cout << "| 81. Camera 2 Focal Length                              |" << endl;
		cout << "----------------------------------------------------------" << endl;
		cout << "| 0. Back to Main Menu                                   |" << endl;
		cout << "----------------------------------------------------------" << endl;
		cout << endl;
		cout << "Current Settings" << endl;
		if (working_memory_enabled)
			cout << "Working Memory: True" << endl;
		else
			cout << "Working Memory: False" << endl;
		if (short_term_memory_enabled)
			cout << "Short Term Memory: True" << endl;
		else
			cout << "Short Term Memory: False" << endl;
		if (long_term_memory_enabled)
			cout << "Long Term Memory: True" << endl;
		else
			cout << "Long Term Memory: False" << endl;
		if (vision_memory)
			cout << "Vision Memory: True" << endl;
		else
			cout << "Visual Memory: False" << endl;
		if (sound_memory)
			cout << "Sound Memory: True" << endl;
		else
			cout << "Sound Memory: False" << endl;
		if (speech_commands)
			cout << "Speech Commands: True" << endl;
		else
			cout << "Speech Commands: False" << endl;
		if (visual_analysis)
			cout << "Visual Analysis: True" << endl;
		else
			cout << "Visual Analysis: False" << endl;
		if (llm_server_enabled)
			cout << "LLM Server: True" << endl;
		else
			cout << "LLM Server: False" << endl;
		if (llm_server_enabled)
			cout << "LLM Server: True" << endl;
		else
			cout << "LLM Server: False" << endl;
		if (whisper_server_enabled)
			cout << "Transcription Server: True" << endl;
		else
			cout << "Transcription Server: False" << endl;
		if (ethics_check_enabled)
			cout << "Ethics Check: True" << endl;
		else
			cout << "Ethics Check: False" << endl;
		if (cuda_accelleration)
			cout << "CUDA Accelleration: True" << endl;
		else
			cout << "CUDA Accelleration: False" << endl;
		if (cuda_accelleration_remote_enabled)
			cout << "CUDA Accelleration Remote: True" << endl;
		else
			cout << "CUDA Accelleration Remote: False" << endl;
		if (tensor_accelleration)
			cout << "Tensor Accelleration: True" << endl;
		else
			cout << "Tensor Accelleraton: False" << endl;
		if (tensor_accelleration_remote_enabled)
			cout << "Tensor Accelleration Remote: True" << endl;
		else
			cout << "Tensor Accelleration Remote: False" << endl;
		if (vision_object_detection)
			cout << "Visual Object Detection: True" << endl;
		else
			cout << "Visual Object Detection: False" << endl;
		if (vision_object_detection_cuda)
			cout << "Vision Object Detection CUDA: True" << endl;
		else
			cout << "Vision Object Detection CUDA: False" << endl;
		if (vision_object_detection_remote_enabled)
			cout << "Visual Object Detection Remote: True" << endl;
		else
			cout << "Visual Object Detection Remote: False" << endl;
		if (sound_reasoning)
			cout << "Sound Reasoning: True" << endl;
		else
			cout << "Sound Reasoning: False" << endl;
		if (reading_reasoning)
			cout << "Reading Reasoning: True" << endl;
		else
			cout << "Reading Reasoning: False" << endl;
		if (speech_reasoning)
			cout << "Speech Reasoning: True" << endl;
		else
			cout << "Speech Reasoning: False" << endl;
		if (camera1_enabled)
			cout << "Camera 1 Enabled: True" << endl;
		else
			cout << "Camera 1 Enabled: False" << endl;
		if (camera2_enabled)
			cout << "Camera 2 Enabled: True" << endl;
		else
			cout << "Camera 2 Enabled: False" << endl;
		if (microphone1_enabled)
			cout << "Microphone 1 Enabled: True" << endl;
		else
			cout << "Microphone 1 Enabled: False" << endl;
		if (microphone2_enabled)
			cout << "Microphone 2 Enabled: True" << endl;
		else
			cout << "Microphone 2 Enabled: False" << endl;
		if (speech_recognition)
			cout << "Speech Recognition: True" << endl;
		else
			cout << "Speech Recognition: False" << endl;
		if (sound_analysis)
			cout << "Sound Analysis: True" << endl;
		else
			cout << "Sound Analysis: False" << endl;
		if (computer_use)
			cout << "Computer Use: True" << endl;
		else
			cout << "Computer Use: False" << endl;
		if (thought)
			cout << "Thought: True" << endl;
		else
			cout << "Thought: False" << endl;
		if (computer_monitor_recognition)
			cout << "Computer Monitor Recognition: True" << endl;
		else
			cout << "Computer Monitor Recognition: False" << endl;
		if (computer_owned_recognition)
			cout << "Computer Owned Recognition: True" << endl;
		else
			cout << "Computer Owned Recognition: False" << endl;
		if (reading)
			cout << "Reading: True" << endl;
		else
			cout << "Reading: False" << endl;
		//if (reading_fallacy_check)
		//	cout << "Reading Fallacy Checking: True" << endl;
		//else
		//	cout << "Reading Fallacy Checking: False" << endl;
		cout << "Visual Memory Location: " << vision_memory_directory << endl;
		cout << "Sound Memory Location: " << sound_directory << endl;
		cout << "Working Memory Limit: " << working_memory_limit << " MB" << endl;
		cout << "Working Memory Location: " << working_memory_location << endl;
		cout << "Short Term Memory Limit: " << short_term_memory_limit << " GB" << endl;
		cout << "Short Term Memory Location: " << short_term_memory_location << endl;
		cout << "Long Term Memory Limit: " << long_term_memory_limit << " GB" << endl;
		cout << "Long Term Memory Location: " << long_term_memory_location << endl;
		cout << "CUDA Accelleration Remote Hostname: " << cuda_accelleration_remote_hostname << endl;
		cout << "CUDA Acelleration Remote Cores: " << cuda_accelleration_remote_cores << endl;
		cout << "Tensor Accelleration Remote Hostname: " << tensor_accelleration_remote_hostname << endl;
		cout << "Tensor Accelleration Remote Cores: " << tensor_accelleration_remote_cores << endl;
		cout << "Tensorflow Object Detection Model: " << tensorflow_model << endl;
		cout << "Tensorflow Object Detection Labels: " << tensorflow_labels << endl;
		cout << "Whisper Model Location: " << whisper_model << endl;
		cout << "Whisper Threads: " << whisper_threads << endl;
		cout << "FFMpeg Location: " << ffmpeg_location << endl;
		cout << "Camera 1 Device: " << camera1 << endl;
		cout << "Camera 1 FPS: " << camera1_fps << endl;
		cout << "Camera 1 Resolution: " << camera1_resolution << endl;
		cout << "Camera 1 Focal Length" << camera1_focal_length << endl;
		cout << "Camera 2 Device: " << camera2 << endl;
		cout << "Camera 2 FPS: " << camera2_fps << endl;
		cout << "Camera 2 Resolution: " << camera2_resolution << endl;
		cout << "Camera 2 Focal Lengt: " << camera2_focal_length << endl;
		cout << "Microphone 1 Device: " << microphone1_device_name << endl;
		cout << "Microphone 1 Device ID: " << microphone1_device_id << endl;
		cout << "Microphone 2 Device: " << microphone2_device_name << endl;
		cout << "Microphone 2 Device ID: " << microphone2_device_id << endl;
		cout << "Microphone Codec: " << sound_codec << endl;
		cout << "Microphone Bitrate: " << sound_bitrate << " Kb/s" << endl;
		cout << "Microphone Sample Rate: " << sound_sample_rate << " Hz" << endl;
		cout << "Microphone Channels: " << sound_channels << endl;
		cout << "Microphone Bits Per Sample: " << sound_bits_per_sample << endl;
		cout << "Microphone Recording Interval: " << sound_recording_interval << " seconds" << endl;
		cout << "Speech Commands Activation: " << speech_commands_activation << endl;
		cout << "Speech Commands Terminator: " << speech_commands_terminator << endl;
		cout << "Transcription Server Hostname: " << whisper_hostname << endl;
		cout << "Transcription Server Username: " << whisper_username << endl;
		cout << "Transcription Server Password: " << whisper_password << endl;
		//cout << "Microphone Sample Rate: " << mic_sample_rate << endl;
		//cout << "Microphone Number Channels: " << mic_num_channels << endl;
		//cout << "Microphone Bits Per Sample: " << mic_bits_per_sample << endl;
		cout << "LLM Server Hostname: " << llm_hostname << endl;
		cout << "LLM Server Username: " << llm_username << endl;
		cout << "LLM Server Password: " << llm_password << endl;
		cout << "Tensorflow Score: " << tensorflow_score << endl;
		if (news_watching)
			cout << "News Watching: True" << endl;
		else
			cout << "News Watching: False" << endl;
		if (action_commands)
			cout << "Action Watching: True" << endl;
		else
			cout << "Actions Watching: False" << endl;
		if (needs_detection)
			cout << "Needs Detection: True" << endl;
		else
			cout << "Needs Detection: False" << endl;
		if (navigation_detection)
			cout << "Navigation Detection: True" << endl;
		else
			cout << "Navigation Detection: False" << endl;
		if (social_needs_detection)
			cout << "Social Needs Detection: True" << endl;
		else
			cout << "Social Needs Detection: False" << endl;
		cout << endl;
		cout << "Your Selection: ";
		getline(cin, input);

		if (input == "1")
		{
			if (!working_memory_enabled)
				working_memory_enabled = true;
			else
				working_memory_enabled = false;

			_Settings::SaveSettings();
		}
		else if (input == "2")
		{
			if (!short_term_memory_enabled)
				short_term_memory_enabled = true;
			else
				short_term_memory_enabled = false;

			_Settings::SaveSettings();
		}
		else if (input == "3")
		{
			if (!long_term_memory_enabled)
				long_term_memory_enabled = true;
			else
				long_term_memory_enabled = false;

			_Settings::SaveSettings();
		}
		else if (input == "4")
		{
			if (!vision_memory)
				vision_memory = true;
			else
				vision_memory = false;

			_Settings::SaveSettings();
		}
		else if (input == "5")
		{
			if (!sound_memory)
				sound_memory = true;
			else
				sound_memory = false;

			_Settings::SaveSettings();
		}
		else if (input == "6")
		{
			if (!speech_memory)
				speech_memory = true;
			else
				speech_memory = false;

			_Settings::SaveSettings();
		}
		else if (input == "7")
		{
			if (!ethics_check_enabled)
				ethics_check_enabled = true;
			else
				ethics_check_enabled = false;

			_Settings::SaveSettings();
		}
		else if (input == "8")
		{
			if (!cuda_accelleration)
				cuda_accelleration = true;
			else
				cuda_accelleration = false;

			_Settings::SaveSettings();
		}
		else if (input == "9")
		{
			if (!cuda_accelleration_remote_enabled)
				cuda_accelleration_remote_enabled = true;
			else
				cuda_accelleration_remote_enabled = false;

			_Settings::SaveSettings();
		}
		else if (input == "10")
		{
			if (!tensor_accelleration)
				tensor_accelleration = true;
			else
				tensor_accelleration = false;

			_Settings::SaveSettings();
		}
		else if (input == "11")
		{
			if (!tensor_accelleration_remote_enabled)
				tensor_accelleration_remote_enabled = true;
			else
				tensor_accelleration_remote_enabled = false;

			_Settings::SaveSettings();
		}
		else if (input == "12")
		{
			if (!vision_object_detection)
				vision_object_detection = true;
			else
				vision_object_detection = false;

			_Settings::SaveSettings();
		}
		else if (input == "13")
		{
			if (!vision_object_detection_cuda)
				vision_object_detection_cuda = true;
			else
				vision_object_detection_cuda = false;

			_Settings::SaveSettings();
		}
		else if (input == "14")
		{
			if (!vision_object_detection_server)
				vision_object_detection_server = true;
			else
				vision_object_detection_server = false;

			_Settings::SaveSettings();
		}
		else if (input == "15")
		{
			if (!visual_analysis)
				visual_analysis = true;
			else
				visual_analysis = false;

			_Settings::SaveSettings();
		}
		else if (input == "16")
		{
			if (!sound_reasoning)
				sound_reasoning = true;
			else
				sound_reasoning = false;

			_Settings::SaveSettings();
		}
		else if (input == "17")
		{
			if (!reading_reasoning)
				reading_reasoning = true;
			else
				reading_reasoning = false;

			_Settings::SaveSettings();
		}
		else if (input == "18")
		{
			if (!speech_reasoning)
				speech_reasoning = true;
			else
				speech_reasoning = false;

			_Settings::SaveSettings();
		}
		else if (input == "19")
		{
			if (!camera1_enabled)
				camera1_enabled = true;
			else
				camera1_enabled = false;

			_Settings::SaveSettings();
		}
		else if (input == "20")
		{
			if (!camera2_enabled)
				camera2_enabled = true;
			else
				camera2_enabled = false;

			_Settings::SaveSettings();
		}
		else if (input == "21")
		{
			if (!microphone1_enabled)
				microphone1_enabled = true;
			else
				microphone1_enabled = false;

			_Settings::SaveSettings();
		}
		else if (input == "22")
		{
			if (!microphone2_enabled)
				microphone2_enabled = true;
			else
				microphone2_enabled = false;

			_Settings::SaveSettings();
		}
		else if (input == "23")
		{
			if (!speech_recognition)
				speech_recognition = true;
			else
				speech_recognition = false;

			_Settings::SaveSettings();
		}
		else if (input == "24")
		{
			if (!sound_analysis)
				sound_analysis = true;
			else
				sound_analysis = false;
		}
		else if (input == "25")
		{
			if (!computer_use)
				computer_use = true;
			else
				computer_use = false;

			_Settings::SaveSettings();
		}
		else if (input == "26")
		{
			if (!computer_monitor_recognition)
				computer_monitor_recognition = true;
			else
				computer_monitor_recognition = false;

			_Settings::SaveSettings();
		}
		else if (input == "27")
		{
			if (!computer_owned_recognition)
				computer_owned_recognition = true;
			else
				computer_owned_recognition = false;

			_Settings::SaveSettings();
		}
		else if (input == "28")
		{
			if (!reading)
				reading = true;
			else
				reading = false;

			_Settings::SaveSettings();
		}
		else if (input == "29")
		{
			//if (!reading_fallacy_check)
			//	reading_fallacy_check = true;
			//else
			//	reading_fallacy_check = false;

			//_Settings::SaveSettings();
		}
		else if (input == "30")
		{
			if (!listening_fallacy_checking)
				listening_fallacy_checking = true;
			else
				listening_fallacy_checking = false;

			_Settings::SaveSettings();
		}
		else if (input == "31")
		{
			if (!listening_bias_checking)
				listening_bias_checking = true;
			else
				listening_bias_checking = false;

			_Settings::SaveSettings();
		}
		else if (input == "32")
		{
			if (!listening_literature_device_checking)
				listening_literature_device_checking = true;
			else
				listening_literature_device_checking = false;

			_Settings::SaveSettings();
		}
		else if (input == "33")
		{
			if (!listening_axiom_checking)
				listening_axiom_checking = true;
			else
				listening_axiom_checking = false;

			_Settings::SaveSettings();
		}
		else if (input == "34")
		{
			if (!listening_abuse_checking)
				listening_abuse_checking = true;
			else
				listening_abuse_checking = false;

			_Settings::SaveSettings();
		}
		else if (input == "35")
		{
			if (!listening_law_checking)
				listening_law_checking = true;
			else
				listening_law_checking = false;

			_Settings::SaveSettings();
		}
		else if (input == "36")
		{
			if (!listening_dictionary_checking)
				listening_dictionary_checking = true;
			else
				listening_dictionary_checking = false;

			_Settings::SaveSettings();
		}
		else if (input == "37")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Visual Memory Location" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					// Save the variable to working memory
					vision_memory_directory = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "38")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Sound Memory Location" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					// Save the variable to working memory
					sound_directory = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "39")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Working Memory Limit" << endl;
				cout << "Write in Megabytes with no units!" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					// Save the variable to working memory
					working_memory_limit = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "40")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Working Memory Location" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					working_memory_location = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "41")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Short Term Memory Limit" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					short_term_memory_limit = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "42")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Short Term Memory Directory" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					short_term_memory_location = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "43")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Long Term Memory Limit" << endl;
				cout << "Write in Megabytes with no units!" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					long_term_memory_limit = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "44")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Long Term Memory Directory" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					long_term_memory_location = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "45")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "CUDA Accelleration Remote Hostname" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					cuda_accelleration_remote_hostname = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "46")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "CUDA Acclleration Remote Cores" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					cuda_accelleration_remote_cores = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "47")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Tensor Accelleration Remote Hostname" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					tensor_accelleration_remote_hostname = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "48")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Tensor Accelleration Remote Cores" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					tensor_accelleration_remote_cores = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "49")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "FFMPEG Location" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					ffmpeg_location = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
			}
		else if (input == "50")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Tensorflow Saved Model Location" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					tensorflow_model = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "51")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Tensorflow Saved Model Labels" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					tensorflow_labels = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "52")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Whisper Model Location: " << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					whisper_model = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "53")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Camera 1 Device" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					camera1 = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "54")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Camera 1 FPS" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					camera1_fps = stoi(input2);
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "55")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Camera 1 Resolution" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					camera1_resolution = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "56")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Camera 2 Device" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					camera2 = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "57")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Camera 2 FPS" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					camera2_fps = stoi(input2);
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "58")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Camera 2 Resolution" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					camera2_resolution = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "59")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Microphone 1 Device Name" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					microphone1_device_name = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "60")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Microphone 1 Device ID" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					microphone1_device_id = stoi(input2);
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "61")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Microphone 2 Device Name" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					microphone2_device_name = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "62")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Microphone 2 Device ID" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					microphone2_device_id = stoi(input2);
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
			}
		else if (input == "63")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Sound Codec" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					sound_codec = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "64")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Sound Bitrate" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					sound_bitrate = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "65")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Sound Sample Rate" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					sound_sample_rate = stoi(input2);
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "66")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Sound Channels" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					sound_channels = stoi(input2);
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "67")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Sound Bits Per Channel" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					sound_bits_per_sample = stoi(input2);
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "68")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Sound Recording Interval" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					sound_recording_interval = stoi(input2);
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "69")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Speech Commands Activation: " << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					speech_commands_activation = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "70")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Speech Commands Terminator: " << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					speech_commands_terminator = input2;
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "70")
		{
			if (!news_watching)
				news_watching = true;
			else
				news_watching = false;

			_Settings::SaveSettings();
		}
		else if (input == "71")
		{
			if (!action_detection)
				action_detection = true;
			else
				action_detection = false;

			_Settings::SaveSettings();
		}
		else if (input == "72")
		{
			if (!speech_recognition)
				needs_detection = true;
			else
				needs_detection = false;

			_Settings::SaveSettings();
		}
		else if (input == "73")
		{
			if (!navigation_detection)
				navigation_detection = true;
			else
				navigation_detection = false;

			_Settings::SaveSettings();
		}
		else if (input == "74")
		{
			if (!social_needs_detection)
				social_needs_detection = true;
			else
				social_needs_detection = false;

			_Settings::SaveSettings();
		}
		else if (input == "75")
		{
			if (!thought)
				thought = true;
			else
				thought = false;

			_Settings::SaveSettings();
		}
		else if (input == "76")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Whisper Threads: " << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					whisper_threads = stoi(input2);
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "77")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Tensorflow Score: " << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					tensorflow_score = stod(input2);
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "78")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Camera 1 Focal Length: " << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					camera1_focal_length = stod(input2);
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "79")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Camera 2 Focal Length: " << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					camera2_focal_length = stod(input2);
					_Settings::SaveSettings();
					boolean2 = true;
				}
			}
		}
		else if (input == "0")
		{
			_Settings::SaveSettings();
			boolean = true;
		}
		else
			cout << "Invalid Entry..." << endl;
	}
}

void _Settings::ListeningSettings()
{
	string input;
	bool boolean = false;

	while (!boolean)
	{
		system("cls");

		cout << endl;
		cout << "============== Listening Settings ===============" << endl;
		cout << "| 1. Enable/Disable Fallacy Checking            |" << endl;
		cout << "| 2. Enable/Disable Bias Checking               |" << endl;
		cout << "| 3. Enable/Disable Literature Device Checking  |" << endl;
		cout << "| 4. Enable/Disable Axiom Checking              |" << endl;
		cout << "| 5. Enable/Disable Abuse Checking              |" << endl;
		cout << "| 6. Enable/Disable Law Checking                |" << endl;
		cout << "| 7. Enable/Disable Algebra                     |" << endl;
		cout << "| 8. Enable/Disable Artificial Intelligence     |" << endl;
		cout << "| 9. Enable/Disable Bash                        |" << endl;
		cout << "| 10. Enable/Disable Batch                      |" << endl;
		cout << "| 11. Enable/Disable Beauty                     |" << endl;
		cout << "| 12. Enable/Disable Biology                    |" << endl;
		cout << "| 13. Enable/Disable Botany                     |" << endl;
		cout << "| 14. Enable/Disable C++                        |" << endl;
		cout << "| 15. Enable/Disable Calculus                   |" << endl;
		cout << "| 16. Enable/Disable Camping                    |" << endl;
		cout << "| 17. Enable/Disable Chemistry                  |" << endl;
		cout << "| 18. Enable/Disable Civil Engineering          |" << endl;
		cout << "| 19. Enable/Disable College Algebra            |" << endl;
		cout << "| 20. Enable/Disable Computer Science           |" << endl;
		cout << "| 21. Enable/Disable Cryptography               |" << endl;
		cout << "| 22. Enable/Disable Dance                      |" << endl;
		cout << "| 23. Enable/Disable Differential Equations     |" << endl;
		cout << "| 24. Enable/Disable Discrete Mathematics       |" << endl;
		cout << "| 25. Enable/Disable Ecology                    |" << endl;
		cout << "| 26. Enable/Disable Economics                  |" << endl;
		cout << "| 27. Enable/Disable Electrical Engineering     |" << endl;
		cout << "| 28. Enable/Disable Engineering                |" << endl;
		cout << "| 29. Enable/Disable Ethics                     |" << endl;
		cout << "| 30. Enable/Disable Finance                    |" << endl;
		cout << "| 31. Enable/Disable Game Theory                |" << endl;
		cout << "| 32. Enable/Disable Geography                  |" << endl;
		cout << "| 33. Enable/Disable Geology                    |" << endl;
		cout << "| 34. Enable/Disable Geometry                   |" << endl;
		cout << "| 35. Enable/Disable Graph Theory               |" << endl;
		cout << "| 36. Enable/Disable Internet                   |" << endl;
		cout << "| 37. Enable/Disable Java                       |" << endl;
		cout << "| 38. Enable/Disable Linear Algebra             |" << endl;
		cout << "| 39. Enable/Disable Logic                      |" << endl;
		cout << "| 40. Enable/Disable Marketing                  |" << endl;
		cout << "| 41. Enable/Disable Materials Science          |" << endl;
		cout << "| 42. Enable/Disable Mechanical Engineering     |" << endl;
		cout << "| 43. Enable/Disable Medicine                   |" << endl;
		cout << "| 44. Enable/Disable Nautical                   |" << endl;
		cout << "| 45. Enable/Disable Networking                 |" << endl;
		cout << "| 46. Enable/Disable Pottery                    |" << endl;
		cout << "| 47. Enable/Disable Philosophy                 |" << endl;
		cout << "| 48. Enable/Disable Photography                |" << endl;
		cout << "| 49. Enable/Disable Physics                    |" << endl;
		cout << "| 50. Enable/Disable Political Science          |" << endl;
		cout << "| 51. Enable/Disable Politics                   |" << endl;
		cout << "| 52. Enable/Disable Probability and Statistics |" << endl;
		cout << "| 53. Enable/Disable Programming                |" << endl;
		cout << "| 54. Enable/Disable Psychiatry                 |" << endl;
		cout << "| 55. Enable/Disable Sales                      |" << endl;
		cout << "| 56. Enable/Disable Stocks                     |" << endl;
		cout << "| 57. Enable/Disable Structural Engineering     |" << endl;
		cout << "| 58. Enable/Disable Theatre                    |" << endl;
		cout << "| 59. Enable/Disable Trigonometry               |" << endl;
		cout << "| 60. Enable/Disable Wood Working               |" << endl;
		cout << "| 61. Enable/Disable Writing                    |" << endl;
		cout << "| 62. Set Listening Interval                    |" << endl;
		cout << "-------------------------------------------------" << endl;
		cout << endl;
		if (listening_fallacy_checking)
			cout << "Listening Fallacy Checking: True" << endl;
		else
			cout << "Listening Fallacy Checking: False" << endl;
		if (listening_bias_checking)
			cout << "Listening Bias Checking: True" << endl;
		else
			cout << "Listening Bias Checking: False" << endl;
		if (listening_literature_device_checking)
			cout << "Listening Literature Device Checking: True" << endl;
		else
			cout << "Listening Literature Device Checking: False" << endl;
		if (listening_axiom_checking)
			cout << "Listening Axiom Checking: True" << endl;
		else
			cout << "Listening Axiom Checking: False" << endl;
		if (listening_abuse_checking)
			cout << "Listening Abuse Checking: True" << endl;
		else
			cout << "Listening Abuse Checking: False" << endl;
		if (listening_law_checking)
			cout << "Listening Law Checking: True" << endl;
		else
			cout << "Listening Law Checking: False" << endl;
		if (listening_dictionary_checking)
			cout << "Listening Dictionary Checking: True" << endl;
		else
			cout << "Listening Dictionary Checking: False" << endl;
		if (listening_aerospace_engineering)
			cout << "Listening Aerospace Engineering: True" << endl;
		else
			cout << "Listening Aerospace Engineering: False" << endl;
		if (listening_algebra)
			cout << "Listening Algebra: True" << endl;
		else
			cout << "Listening Algebra: False" << endl;
		if (listening_artificial_intelligence)
			cout << "Listening Artificial Intelligence: True" << endl;
		else
			cout << "Listening Artificial Intelligence: False" << endl;
		if (listening_bash)
			cout << "Listening BASH: True" << endl;
		else
			cout << "Listening BASH: False" << endl;
		if (listening_batch)
			cout << "Listening BATCH: True" << endl;
		else
			cout << "Listening BATCH: False" << endl;
		if (listening_beauty)
			cout << "Listening Beauty: True" << endl;
		else
			cout << "Listening Beauty: False" << endl;
		if (listening_biology)
			cout << "Listening Biology: True" << endl;
		else
			cout << "Listening Biology: False" << endl;
		if (listening_botany)
			cout << "Listening Botany: True" << endl;
		else
			cout << "Listening Botany: False" << endl;
		if (listening_cpp)
			cout << "Listening C++: True" << endl;
		else
			cout << "Listening C++: False" << endl;
		if (listening_calculus)
			cout << "Listening Calculus: True" << endl;
		else
			cout << "Listening Calculus: False" << endl;
		if (listening_chemistry)
			cout << "Listening Chemistry: True" << endl;
		else
			cout << "Listening Chemistry: False" << endl;
		if (listening_civil_engineering)
			cout << "Listening Civil Engineering: True" << endl;
		else
			cout << "Listening Civil Engineering: False" << endl;
		if (listening_college_algebra)
			cout << "Listening College Algebra: True" << endl;
		else
			cout << "Listening College Algebra: False" << endl;
		if (listening_computer_science)
			cout << "Listening Computer Science: True" << endl;
		else
			cout << "Listening Computer Science: False" << endl;
		if (listening_cryptography)
			cout << "Listening Cryptography: True" << endl;
		else
			cout << "Listening Cryptography: False" << endl;
		if (listening_dance)
			cout << "Listening Dance: True" << endl;
		else
			cout << "Listening Dance: False" << endl;
		if (listening_differential_equations)
			cout << "Listening Differential Equations: True" << endl;
		else
			cout << "Listening Differential Equations: False" << endl;
		if (listening_ecology)
			cout << "Listening Ecology: True" << endl;
		else
			cout << "Listening Ecology: False" << endl;
		if (listening_economics)
			cout << "Listening Economics: True" << endl;
		else
			cout << "Listening Economics: False" << endl;
		if (listening_electrical_engineering)
			cout << "Listening Electrical Engineering: True" << endl;
		else
			cout << "Listening Electrical Engineering: False" << endl;
		if (listening_engineering)
			cout << "Listening Engineering: True" << endl;
		else
			cout << "Listening Engineering: False" << endl;
		if (listening_ethics)
			cout << "Listening Ethics: True" << endl;
		else
			cout << "Listening Ethics: False" << endl;
		if (listening_game_theory)
			cout << "Listening Game Theory: True" << endl;
		else
			cout << "Listening Game Theory: False" << endl;
		if (listening_geography)
			cout << "Listening Geography: True" << endl;
		else
			cout << "Listening Geography: False" << endl;
		if (listening_geology)
			cout << "Listening Geology: True" << endl;
		else
			cout << "Listening Geology: False" << endl;
		if (listening_geometry)
			cout << "Listening Geometry: True" << endl;
		else
			cout << "Listening Geometry: False" << endl;
		if (listening_graph_theory)
			cout << "Listening Graph Theory: True" << endl;
		else
			cout << "Listening Graph Theory: False" << endl;
		if (listening_internet)
			cout << "Listening Internet: True" << endl;
		else
			cout << "Listening Internet: False" << endl;
		if (listening_java)
			cout << "Listening Java: True" << endl;
		else
			cout << "Listening Java: False" << endl;
		if (listening_linear_algebra)
			cout << "Listening Linear Algebra: True" << endl;
		else
			cout << "Listening Linear Algebra: False" << endl;
		if (listening_logic)
			cout << "Listening Logic: True" << endl;
		else
			cout << "Listening Logic: False" << endl;
		if (listening_marketing)
			cout << "Listening Marketing: True" << endl;
		else
			cout << "Listening Marketing: False" << endl;
		if (listening_materials_science)
			cout << "Listening Materials Science: True" << endl;
		else
			cout << "Listening Materials Science: False" << endl;
		if (listening_mechanical_engineering)
			cout << "Listening Mechanical Engineering: True" << endl;
		else
			cout << "Listening Mechanical Engineering: False" << endl;
		if (listening_medicine)
			cout << "Listening Medicine: True" << endl;
		else
			cout << "Listening Medicine: False" << endl;
		if (listening_nautical)
			cout << "Listening Nautical: True" << endl;
		else
			cout << "Listening Nautical: False" << endl;
		if (listening_networking)
			cout << "Listening Networking: True" << endl;
		else
			cout << "Listening Networking: False" << endl;
		if (listening_pottery)
			cout << "Listening pottery: True" << endl;
		else
			cout << "Listening Poetry: False" << endl;
		if (listening_philosophy)
			cout << "Listening Philosophy: True" << endl;
		else
			cout << "Listening Philosophy: False" << endl;
		if (listening_photography)
			cout << "Listening Photography: True" << endl;
		else
			cout << "Listening Photography: False" << endl;
		if (listening_physics)
			cout << "Listening Physics: True" << endl;
		else
			cout << "Listening Physics: False" << endl;
		if (listening_political_science)
			cout << "Listening Political Science: True" << endl;
		else
			cout << "Listening Political Science: False" << endl;
		if (listening_probability_and_statistics)
			cout << "Listening Probability and Statistics: True" << endl;
		else
			cout << "Listening Probability and Statistics: False" << endl;
		if (listening_programming)
			cout << "Listening Programming: True" << endl;
		else
			cout << "Listening Programming: False" << endl;
		if (listening_psychiatry)
			cout << "Listening Psychiatry: True" << endl;
		else
			cout << "Listening Psychiatry: False" << endl;
		if (listening_psychology)
			cout << "Listening Psychology: True" << endl;
		else
			cout << "Listening Psychology: False" << endl;
		if (listening_sales)
			cout << "Listening Sales: True" << endl;
		else
			cout << "Listening Sales: False" << endl;
		if (listening_stocks)
			cout << "Listening Stocks: True" << endl;
		else
			cout << "Listening Stocks: False" << endl;
		if (listening_structural_engineering)
			cout << "Listening Structural Engineering: True" << endl;
		else
			cout << "Listening Structural Engineering: False" << endl;
		if (listening_theatre)
			cout << "Listening Theatre: True" << endl;
		else
			cout << "Listening Theatre: False" << endl;
		if (listening_trigonometry)
			cout << "Listening Trigonometry: True" << endl;
		else
			cout << "Listening Trigonometry: False" << endl;
		if (listening_wood_working)
			cout << "Listening Wood Working: True" << endl;
		else
			cout << "Listening Wood Working: False" << endl;
		if (listening_writing)
			cout << "Listening Writing: True" << endl;
		else
			cout << "Listening Writing: False" << endl;
		cout << "Listening Interval: " << listening_seconds_interval << endl;
		cout << endl;
		cout << "Your Selection: ";
		getline(cin, input);

		if (input == "1")
		{
			if (listening_fallacy_checking)
			{
				listening_fallacy_checking = false;
			}
			else
			{
				listening_fallacy_checking = true;
			}
		}
		if (input == "2")
		{
			if (listening_bias_checking)
			{
				listening_bias_checking = false;
			}
			else
			{
				listening_bias_checking = true;
			}
		}
		if (input == "3")
		{
			if (listening_literature_device_checking)
			{
				listening_literature_device_checking = false;
			}
			else
			{
				listening_literature_device_checking = true;
			}
		}
		if (input == "4")
		{
			if (listening_axiom_checking)
			{
				listening_axiom_checking = false;
			}
			else
			{
				listening_axiom_checking = true;
			}
		}
		if (input == "5")
		{
			if (listening_abuse_checking)
			{
				listening_abuse_checking = false;
			}
			else
			{
				listening_abuse_checking = true;
			}
		}
		if (input == "6")
		{
			if (listening_law_checking)
			{
				listening_law_checking = false;
			}
			else
			{
				listening_law_checking = true;
			}
		}
		if (input == "7")
		{
			if (listening_dictionary_checking)
			{
				listening_dictionary_checking = false;
			}
			else
			{
				listening_dictionary_checking = true;
			}
		}
		if (input == "8")
		{
			if (listening_aerospace_engineering)
			{
				listening_aerospace_engineering = false;
			}
			else
			{
				listening_aerospace_engineering = true;
			}
		}
		if (input == "9")
		{
			if (listening_algebra)
			{
				listening_algebra = false;
			}
			else
			{
				listening_algebra = true;
			}
		}
		if (input == "10")
		{
			if (listening_artificial_intelligence)
			{
				listening_artificial_intelligence = false;
			}
			else
			{
				listening_artificial_intelligence = true;
			}
		}
		if (input == "11")
		{
			if (listening_bash)
			{
				listening_bash = false;
			}
			else
			{
				listening_bash = true;
			}
		}
		if (input == "12")
		{
			if (listening_batch)
			{
				listening_batch = false;
			}
			else
			{
				listening_batch = true;
			}
		}
		if (input == "13")
		{
			if (listening_beauty)
			{
				listening_beauty = false;
			}
			else
			{
				listening_beauty = true;
			}
		}
		if (input == "14")
		{
			if (listening_biology)
			{
				listening_biology = false;
			}
			else
			{
				listening_biology = true;
			}
		}
		if (input == "15")
		{
			if (listening_botany)
			{
				listening_botany = false;
			}
			else
			{
				listening_botany = true;
			}
		}
		if (input == "16")
		{
			if (listening_cpp)
			{
				listening_cpp = false;
			}
			else
			{
				listening_cpp = true;
			}
		}
		if (input == "17")
		{
			if (listening_calculus)
			{
				listening_calculus = false;
			}
			else
			{
				listening_calculus = true;
			}
		}
		if (input == "18")
		{
			if (listening_chemistry)
			{
				listening_chemistry = false;
			}
			else
			{
				listening_chemistry = true;
			}
		}
		if (input == "19")
		{
			if (listening_civil_engineering)
			{
				listening_civil_engineering = false;
			}
			else
			{
				listening_civil_engineering = true;
			}
		}
		if (input == "20")
		{
			if (listening_college_algebra)
			{
				listening_college_algebra = false;
			}
			else
			{
				listening_college_algebra = true;
			}
		}
		if (input == "21")
		{
			if (listening_computer_science)
			{
				listening_computer_science = false;
			}
			else
			{
				listening_computer_science = true;
			}
		}
		if (input == "22")
		{
			if (listening_cryptography)
			{
				listening_cryptography = false;
			}
			else
			{
				listening_cryptography = true;
			}
		}
		if (input == "23")
		{
			if (listening_dance)
			{
				listening_dance = false;
			}
			else
			{
				listening_dance = true;
			}
		}
		if (input == "24")
		{
			if (listening_differential_equations)
			{
				listening_differential_equations = false;
			}
			else
			{
				listening_differential_equations = true;
			}
		}
		if (input == "25")
		{
			if (listening_discrete_mathematics)
			{
				listening_discrete_mathematics = false;
			}
			else
			{
				listening_discrete_mathematics = true;
			}
		}
		if (input == "26")
		{
			if (listening_ecology)
			{
				listening_ecology = false;
			}
			else
			{
				listening_ecology = true;
			}
		}
		if (input == "27")
		{
			if (listening_economics)
			{
				listening_economics = false;
			}
			else
			{
				listening_economics = true;
			}
		}
		if (input == "28")
		{
			if (listening_electrical_engineering)
			{
				listening_electrical_engineering = false;
			}
			else
			{
				listening_electrical_engineering = true;
			}
		}
		if (input == "29")
		{
			if (listening_engineering)
			{
				listening_engineering = false;
			}
			else
			{
				listening_engineering = true;
			}
		}
		if (input == "30")
		{
			if (listening_ethics)
			{
				listening_ethics = false;
			}
			else
			{
				listening_ethics = true;
			}
		}
		if (input == "31")
		{
			if (listening_game_theory)
			{
				listening_game_theory = false;
			}
			else
			{
				listening_game_theory = true;
			}
		}
		if (input == "32")
		{
			if (listening_geography)
			{
				listening_geography = false;
			}
			else
			{
				listening_geography = true;
			}
		}
		if (input == "33")
		{
			if (listening_geology)
			{
				listening_geology = false;
			}
			else
			{
				listening_geology = true;
			}
		}
		if (input == "34")
		{
			if (listening_geometry)
			{
				listening_geometry = false;
			}
			else
			{
				listening_geometry = true;
			}
		}
		if (input == "35")
		{
			if (listening_graph_theory)
			{
				listening_graph_theory = false;
			}
			else
			{
				listening_graph_theory = true;
			}
		}
		if (input == "36")
		{
			if (listening_internet)
			{
				listening_internet = false;
			}
			else
			{
				listening_internet = true;
			}
		}
		if (input == "37")
		{
			if (listening_java)
			{
				listening_java = false;
			}
			else
			{
				listening_java = true;
			}
		}
		if (input == "38")
		{
			if (listening_linear_algebra)
			{
				listening_linear_algebra = false;
			}
			else
			{
				listening_linear_algebra = true;
			}
		}
		if (input == "39")
		{
			if (listening_logic)
			{
				listening_logic = false;
			}
			else
			{
				listening_logic = true;
			}
		}
		if (input == "40")
		{
			if (listening_marketing)
			{
				listening_marketing = false;
			}
			else
			{
				listening_marketing = true;
			}
		}
		if (input == "41")
		{
			if (listening_materials_science)
			{
				listening_materials_science = false;
			}
			else
			{
				listening_materials_science = true;
			}
		}
		if (input == "42")
		{
			if (listening_mechanical_engineering)
			{
				listening_mechanical_engineering = false;
			}
			else
			{
				listening_mechanical_engineering = true;
			}
		}
		if (input == "43")
		{
			if (listening_medicine)
			{
				listening_medicine = false;
			}
			else
			{
				listening_medicine = true;
			}
		}
		if (input == "44")
		{
			if (listening_nautical)
			{
				listening_nautical = false;
			}
			else
			{
				listening_nautical = true;
			}
		}
		if (input == "45")
		{
			if (listening_networking)
			{
				listening_networking = false;
			}
			else
			{
				listening_networking = true;
			}
		}
		if (input == "46")
		{
			if (listening_pottery)
			{
				listening_pottery = false;
			}
			else
			{
				listening_pottery = true;
			}
		}
		if (input == "47")
		{
			if (listening_philosophy)
			{
				listening_philosophy = false;
			}
			else
			{
				listening_philosophy = true;
			}
		}
		if (input == "48")
		{
			if (listening_photography)
			{
				listening_photography = false;
			}
			else
			{
				listening_photography = true;
			}
		}
		if (input == "49")
		{
			if (listening_physics)
			{
				listening_physics = false;
			}
			else
			{
				listening_physics = true;
			}
		}
		if (input == "50")
		{
			if (listening_political_science)
			{
				listening_political_science = false;
			}
			else
			{
				listening_political_science = true;
			}
		}
		if (input == "51")
		{
			if (listening_probability_and_statistics)
			{
				listening_probability_and_statistics = false;
			}
			else
			{
				listening_probability_and_statistics = true;
			}
		}
		if (input == "52")
		{
			if (listening_programming)
			{
				listening_programming = false;
			}
			else
			{
				listening_programming = true;
			}
		}
		if (input == "53")
		{
			if (listening_psychiatry)
			{
				listening_psychiatry = false;
			}
			else
			{
				listening_psychiatry = true;
			}
		}
		if (input == "54")
		{
			if (listening_psychology)
			{
				listening_psychology = false;
			}
			else
			{
				listening_psychology = true;
			}
		}
		if (input == "55")
		{
			if (listening_sales)
			{
				listening_sales = false;
			}
			else
			{
				listening_sales = true;
			}
		}
		if (input == "56")
		{
			if (listening_stocks)
			{
				listening_stocks = false;
			}
			else
			{
				listening_stocks = true;
			}
		}
		if (input == "57")
		{
			if (listening_structural_engineering)
			{
				listening_structural_engineering = false;
			}
			else
			{
				listening_structural_engineering = true;
			}
		}
		if (input == "58")
		{
			if (listening_theatre)
			{
				listening_theatre = false;
			}
			else
			{
				listening_theatre = true;
			}
		}
		if (input == "59")
		{
			if (listening_trigonometry)
			{
				listening_trigonometry = false;
			}
			else
			{
				listening_trigonometry = true;
			}
		}
		if (input == "60")
		{
			if (listening_wood_working)
			{
				listening_wood_working = false;
			}
			else
			{
				listening_wood_working = true;
			}
		}
		if (input == "61")
		{
			if (listening_writing)
			{
				listening_writing = false;
			}
			else
			{
				listening_writing = true;
			}
		}
		if (input == "62")
		{

		}
		else if (input == "0")
		{
			boolean = true;
		}
		else
		{
			cout << "Invalid input. Please try again." << endl;
		}
	}
}

void _Settings::VisualCheckingSettings()
{
	string input;
	bool boolean = false;

	while (!boolean)
	{
		system("cls");

		cout << endl;
		cout << "================ Visual Settings ================" << endl;
		cout << "| 1. Enable/Disable Fallacy Checking            |" << endl;
		cout << "| 2. Enable/Disable Bias Checking               |" << endl;
		cout << "| 3. Enable/Disable Literature Device Checking  |" << endl;
		cout << "| 4. Enable/Disable Axiom Checking              |" << endl;
		cout << "| 5. Enable/Disable Abuse Checking              |" << endl;
		cout << "| 6. Enable/Disable Law Checking                |" << endl;
		cout << "| 7. Enable/Disable Algebra                     |" << endl;
		cout << "| 8. Enable/Disable Artificial Intelligence     |" << endl;
		cout << "| 9. Enable/Disable Bash                        |" << endl;
		cout << "| 10. Enable/Disable Batch                      |" << endl;
		cout << "| 11. Enable/Disable Beauty                     |" << endl;
		cout << "| 12. Enable/Disable Biology                    |" << endl;
		cout << "| 13. Enable/Disable Botany                     |" << endl;
		cout << "| 14. Enable/Disable C++                        |" << endl;
		cout << "| 15. Enable/Disable Calculus                   |" << endl;
		cout << "| 16. Enable/Disable Camping                    |" << endl;
		cout << "| 17. Enable/Disable Chemistry                  |" << endl;
		cout << "| 18. Enable/Disable Civil Engineering          |" << endl;
		cout << "| 19. Enable/Disable College Algebra            |" << endl;
		cout << "| 20. Enable/Disable Computer Science           |" << endl;
		cout << "| 21. Enable/Disable Cryptography               |" << endl;
		cout << "| 22. Enable/Disable Dance                      |" << endl;
		cout << "| 23. Enable/Disable Differential Equations     |" << endl;
		cout << "| 24. Enable/Disable Discrete Mathematics       |" << endl;
		cout << "| 25. Enable/Disable Ecology                    |" << endl;
		cout << "| 26. Enable/Disable Economics                  |" << endl;
		cout << "| 27. Enable/Disable Electrical Engineering     |" << endl;
		cout << "| 28. Enable/Disable Engineering                |" << endl;
		cout << "| 29. Enable/Disable Ethics                     |" << endl;
		cout << "| 30. Enable/Disable Finance                    |" << endl;
		cout << "| 31. Enable/Disable Game Theory                |" << endl;
		cout << "| 32. Enable/Disable Geography                  |" << endl;
		cout << "| 33. Enable/Disable Geology                    |" << endl;
		cout << "| 34. Enable/Disable Geometry                   |" << endl;
		cout << "| 35. Enable/Disable Graph Theory               |" << endl;
		cout << "| 36. Enable/Disable Internet                   |" << endl;
		cout << "| 37. Enable/Disable Java                       |" << endl;
		cout << "| 38. Enable/Disable Linear Algebra             |" << endl;
		cout << "| 39. Enable/Disable Logic                      |" << endl;
		cout << "| 40. Enable/Disable Marketing                  |" << endl;
		cout << "| 41. Enable/Disable Materials Science          |" << endl;
		cout << "| 42. Enable/Disable Mechanical Engineering     |" << endl;
		cout << "| 43. Enable/Disable Medicine                   |" << endl;
		cout << "| 44. Enable/Disable Nautical                   |" << endl;
		cout << "| 45. Enable/Disable Networking                 |" << endl;
		cout << "| 46. Enable/Disable Pottery                    |" << endl;
		cout << "| 47. Enable/Disable Philosophy                 |" << endl;
		cout << "| 48. Enable/Disable Photography                |" << endl;
		cout << "| 49. Enable/Disable Physics                    |" << endl;
		cout << "| 50. Enable/Disable Political Science          |" << endl;
		cout << "| 51. Enable/Disable Politics                   |" << endl;
		cout << "| 52. Enable/Disable Probability and Statistics |" << endl;
		cout << "| 53. Enable/Disable Programming                |" << endl;
		cout << "| 54. Enable/Disable Psychiatry                 |" << endl;
		cout << "| 55. Enable/Disable Sales                      |" << endl;
		cout << "| 56. Enable/Disable Stocks                     |" << endl;
		cout << "| 57. Enable/Disable Structural Engineering     |" << endl;
		cout << "| 58. Enable/Disable Theatre                    |" << endl;
		cout << "| 59. Enable/Disable Trigonometry               |" << endl;
		cout << "| 60. Enable/Disable Wood Working               |" << endl;
		cout << "| 61. Enable/Disable Writing                    |" << endl;
		cout << "| 62. Set Visual Interval                       |" << endl;
		cout << "-------------------------------------------------" << endl;
		cout << endl;
		if (visual_fallacy_checking)
			cout << "Visual Fallacy Checking: True" << endl;
		else
			cout << "Visual Fallacy Checking: False" << endl;
		if (visual_bias_checking)
			cout << "Visual Bias Checking: True" << endl;
		else
			cout << "Visual Bias Checking: False" << endl;
		if (visual_literature_device_checking)
			cout << "Visual Literature Device Checking: True" << endl;
		else
			cout << "Visual Literature Device Checking: False" << endl;
		if (visual_axiom_checking)
			cout << "Visual Axiom Checking: True" << endl;
		else
			cout << "Visual Axiom Checking: False" << endl;
		if (visual_abuse_checking)
			cout << "Visual Abuse Checking: True" << endl;
		else
			cout << "Visual Abuse Checking: False" << endl;
		if (visual_law_checking)
			cout << "Visual Law Checking: True" << endl;
		else
			cout << "Visual Law Checking: False" << endl;
		if (visual_dictionary_checking)
			cout << "Visual Dictionary Checking: True" << endl;
		else
			cout << "Visual Dictionary Checking: False" << endl;
		if (visual_aerospace_engineering)
			cout << "Visual Aerospace Engineering: True" << endl;
		else
			cout << "Visual Aerospace Engineering: False" << endl;
		if (visual_algebra)
			cout << "Visual Algebra: True" << endl;
		else
			cout << "Visual Algebra: False" << endl;
		if (visual_artificial_intelligence)
			cout << "Visual Artificial Intelligence: True" << endl;
		else
			cout << "Visual Artificial Intelligence: False" << endl;
		if (visual_bash)
			cout << "Visual BASH: True" << endl;
		else
			cout << "Visual BASH: False" << endl;
		if (visual_batch)
			cout << "Visual BATCH: True" << endl;
		else
			cout << "Visual BATCH: False" << endl;
		if (visual_beauty)
			cout << "Visual Beauty: True" << endl;
		else
			cout << "Visual Beauty: False" << endl;
		if (visual_biology)
			cout << "Visual Biology: True" << endl;
		else
			cout << "Visual Biology: False" << endl;
		if (visual_botany)
			cout << "Visual Botany: True" << endl;
		else
			cout << "Visual Botany: False" << endl;
		if (visual_cpp)
			cout << "Visual C++: True" << endl;
		else
			cout << "Visual C++: False" << endl;
		if (visual_calculus)
			cout << "Visual Calculus: True" << endl;
		else
			cout << "Visual Calculus: False" << endl;
		if (visual_chemistry)
			cout << "Visual Chemistry: True" << endl;
		else
			cout << "Visual Chemistry: False" << endl;
		if (visual_civil_engineering)
			cout << "Visual Civil Engineering: True" << endl;
		else
			cout << "Visual Civil Engineering: False" << endl;
		if (visual_college_algebra)
			cout << "Visual College Algebra: True" << endl;
		else
			cout << "Visual College Algebra: False" << endl;
		if (visual_computer_science)
			cout << "Visual Computer Science: True" << endl;
		else
			cout << "Visual Computer Science: False" << endl;
		if (visual_cryptography)
			cout << "Visual Cryptography: True" << endl;
		else
			cout << "Visual Cryptography: False" << endl;
		if (visual_dance)
			cout << "Visual Dance: True" << endl;
		else
			cout << "Visual Dance: False" << endl;
		if (visual_differential_equations)
			cout << "Visual Differential Equations: True" << endl;
		else
			cout << "Visual Differential Equations: False" << endl;
		if (visual_ecology)
			cout << "Visual Ecology: True" << endl;
		else
			cout << "Visual Ecology: False" << endl;
		if (visual_economics)
			cout << "Visual Economics: True" << endl;
		else
			cout << "Visual Economics: False" << endl;
		if (visual_electrical_engineering)
			cout << "Visual Electrical Engineering: True" << endl;
		else
			cout << "Visual Electrical Engineering: False" << endl;
		if (visual_engineering)
			cout << "Visual Engineering: True" << endl;
		else
			cout << "Visual Engineering: False" << endl;
		if (visual_ethics)
			cout << "Visual Ethics: True" << endl;
		else
			cout << "Visual Ethics: False" << endl;
		if (visual_game_theory)
			cout << "Visual Game Theory: True" << endl;
		else
			cout << "Visual Game Theory: False" << endl;
		if (visual_geography)
			cout << "Visual Geography: True" << endl;
		else
			cout << "Visual Geography: False" << endl;
		if (visual_geology)
			cout << "Visual Geology: True" << endl;
		else
			cout << "Visual Geology: False" << endl;
		if (visual_geometry)
			cout << "Visual Geometry: True" << endl;
		else
			cout << "Visual Geometry: False" << endl;
		if (visual_graph_theory)
			cout << "Visual Graph Theory: True" << endl;
		else
			cout << "Visual Graph Theory: False" << endl;
		if (visual_internet)
			cout << "Visual Internet: True" << endl;
		else
			cout << "Visual Internet: False" << endl;
		if (visual_java)
			cout << "Visual Java: True" << endl;
		else
			cout << "Visual Java: False" << endl;
		if (visual_linear_algebra)
			cout << "Visual Linear Algebra: True" << endl;
		else
			cout << "Visual Linear Algebra: False" << endl;
		if (visual_logic)
			cout << "Visual Logic: True" << endl;
		else
			cout << "Visual Logic: False" << endl;
		if (visual_marketing)
			cout << "Visual Marketing: True" << endl;
		else
			cout << "Visual Marketing: False" << endl;
		if (visual_materials_science)
			cout << "Visual Materials Science: True" << endl;
		else
			cout << "Visual Materials Science: False" << endl;
		if (visual_mechanical_engineering)
			cout << "Visual Mechanical Engineering: True" << endl;
		else
			cout << "Visual Mechanical Engineering: False" << endl;
		if (visual_medicine)
			cout << "Visual Medicine: True" << endl;
		else
			cout << "Visual Medicine: False" << endl;
		if (visual_nautical)
			cout << "Visual Nautical: True" << endl;
		else
			cout << "Visual Nautical: False" << endl;
		if (visual_networking)
			cout << "Visual Networking: True" << endl;
		else
			cout << "Visual Networking: False" << endl;
		if (visual_pottery)
			cout << "Visual pottery: True" << endl;
		else
			cout << "Visual Poetry: False" << endl;
		if (visual_philosophy)
			cout << "Visual Philosophy: True" << endl;
		else
			cout << "Visual Philosophy: False" << endl;
		if (visual_photography)
			cout << "Visual Photography: True" << endl;
		else
			cout << "Visual Photography: False" << endl;
		if (visual_physics)
			cout << "Visual Physics: True" << endl;
		else
			cout << "Visual Physics: False" << endl;
		if (visual_political_science)
			cout << "Visual Political Science: True" << endl;
		else
			cout << "Visual Political Science: False" << endl;
		if (visual_probability_and_statistics)
			cout << "Visual Probability and Statistics: True" << endl;
		else
			cout << "Visual Probability and Statistics: False" << endl;
		if (visual_programming)
			cout << "Visual Programming: True" << endl;
		else
			cout << "Visual Programming: False" << endl;
		if (visual_psychiatry)
			cout << "Visual Psychiatry: True" << endl;
		else
			cout << "Visual Psychiatry: False" << endl;
		if (visual_psychology)
			cout << "Visual Psychology: True" << endl;
		else
			cout << "Visual Psychology: False" << endl;
		if (visual_sales)
			cout << "Visual Sales: True" << endl;
		else
			cout << "Visual Sales: False" << endl;
		if (visual_stocks)
			cout << "Visual Stocks: True" << endl;
		else
			cout << "Visual Stocks: False" << endl;
		if (visual_structural_engineering)
			cout << "Visual Structural Engineering: True" << endl;
		else
			cout << "Visual Structural Engineering: False" << endl;
		if (visual_theatre)
			cout << "Visual Theatre: True" << endl;
		else
			cout << "Visual Theatre: False" << endl;
		if (visual_trigonometry)
			cout << "Visual Trigonometry: True" << endl;
		else
			cout << "Visual Trigonometry: False" << endl;
		if (visual_wood_working)
			cout << "Visual Wood Working: True" << endl;
		else
			cout << "Visual Wood Working: False" << endl;
		if (visual_writing)
			cout << "Visual Writing: True" << endl;
		else
			cout << "Visual Writing: False" << endl;
		cout << "Visual Interval: " << visual_seconds_interval << endl;
		cout << endl;
		cout << "Your Selection: ";
		getline(cin, input);

		if (input == "1")
		{
			if (visual_fallacy_checking)
			{
				visual_fallacy_checking = false;
			}
			else
			{
				visual_fallacy_checking = true;
			}
		}
		if (input == "2")
		{
			if (visual_bias_checking)
			{
				visual_bias_checking = false;
			}
			else
			{
				visual_bias_checking = true;
			}
		}
		if (input == "3")
		{
			if (visual_literature_device_checking)
			{
				visual_literature_device_checking = false;
			}
			else
			{
				visual_literature_device_checking = true;
			}
		}
		if (input == "4")
		{
			if (visual_axiom_checking)
			{
				visual_axiom_checking = false;
			}
			else
			{
				visual_axiom_checking = true;
			}
		}
		if (input == "5")
		{
			if (visual_abuse_checking)
			{
				visual_abuse_checking = false;
			}
			else
			{
				visual_abuse_checking = true;
			}
		}
		if (input == "6")
		{
			if (visual_law_checking)
			{
				visual_law_checking = false;
			}
			else
			{
				visual_law_checking = true;
			}
		}
		if (input == "7")
		{
			if (visual_dictionary_checking)
			{
				visual_dictionary_checking = false;
			}
			else
			{
				visual_dictionary_checking = true;
			}
		}
		if (input == "8")
		{
			if (visual_aerospace_engineering)
			{
				visual_aerospace_engineering = false;
			}
			else
			{
				visual_aerospace_engineering = true;
			}
		}
		if (input == "9")
		{
			if (visual_algebra)
			{
				visual_algebra = false;
			}
			else
			{
				visual_algebra = true;
			}
		}
		if (input == "10")
		{
			if (visual_artificial_intelligence)
			{
				visual_artificial_intelligence = false;
			}
			else
			{
				visual_artificial_intelligence = true;
			}
		}
		if (input == "11")
		{
			if (visual_bash)
			{
				visual_bash = false;
			}
			else
			{
				visual_bash = true;
			}
		}
		if (input == "12")
		{
			if (visual_batch)
			{
				visual_batch = false;
			}
			else
			{
				visual_batch = true;
			}
		}
		if (input == "13")
		{
			if (visual_beauty)
			{
				visual_beauty = false;
			}
			else
			{
				visual_beauty = true;
			}
		}
		if (input == "14")
		{
			if (visual_biology)
			{
				visual_biology = false;
			}
			else
			{
				visual_biology = true;
			}
		}
		if (input == "15")
		{
			if (visual_botany)
			{
				visual_botany = false;
			}
			else
			{
				visual_botany = true;
			}
		}
		if (input == "16")
		{
			if (visual_cpp)
			{
				visual_cpp = false;
			}
			else
			{
				visual_cpp = true;
			}
		}
		if (input == "17")
		{
			if (visual_calculus)
			{
				visual_calculus = false;
			}
			else
			{
				visual_calculus = true;
			}
		}
		if (input == "18")
		{
			if (visual_chemistry)
			{
				visual_chemistry = false;
			}
			else
			{
				visual_chemistry = true;
			}
		}
		if (input == "19")
		{
			if (visual_civil_engineering)
			{
				visual_civil_engineering = false;
			}
			else
			{
				visual_civil_engineering = true;
			}
		}
		if (input == "20")
		{
			if (visual_college_algebra)
			{
				visual_college_algebra = false;
			}
			else
			{
				visual_college_algebra = true;
			}
		}
		if (input == "21")
		{
			if (visual_computer_science)
			{
				visual_computer_science = false;
			}
			else
			{
				visual_computer_science = true;
			}
		}
		if (input == "22")
		{
			if (visual_cryptography)
			{
				visual_cryptography = false;
			}
			else
			{
				visual_cryptography = true;
			}
		}
		if (input == "23")
		{
			if (visual_dance)
			{
				visual_dance = false;
			}
			else
			{
				visual_dance = true;
			}
		}
		if (input == "24")
		{
			if (visual_differential_equations)
			{
				visual_differential_equations = false;
			}
			else
			{
				visual_differential_equations = true;
			}
		}
		if (input == "25")
		{
			if (visual_discrete_mathematics)
			{
				visual_discrete_mathematics = false;
			}
			else
			{
				visual_discrete_mathematics = true;
			}
		}
		if (input == "26")
		{
			if (visual_ecology)
			{
				visual_ecology = false;
			}
			else
			{
				visual_ecology = true;
			}
		}
		if (input == "27")
		{
			if (visual_economics)
			{
				visual_economics = false;
			}
			else
			{
				visual_economics = true;
			}
		}
		if (input == "28")
		{
			if (visual_electrical_engineering)
			{
				visual_electrical_engineering = false;
			}
			else
			{
				visual_electrical_engineering = true;
			}
		}
		if (input == "29")
		{
			if (visual_engineering)
			{
				visual_engineering = false;
			}
			else
			{
				visual_engineering = true;
			}
		}
		if (input == "30")
		{
			if (visual_ethics)
			{
				visual_ethics = false;
			}
			else
			{
				visual_ethics = true;
			}
		}
		if (input == "31")
		{
			if (visual_game_theory)
			{
				visual_game_theory = false;
			}
			else
			{
				visual_game_theory = true;
			}
		}
		if (input == "32")
		{
			if (visual_geography)
			{
				visual_geography = false;
			}
			else
			{
				visual_geography = true;
			}
		}
		if (input == "33")
		{
			if (visual_geology)
			{
				visual_geology = false;
			}
			else
			{
				visual_geology = true;
			}
		}
		if (input == "34")
		{
			if (visual_geometry)
			{
				visual_geometry = false;
			}
			else
			{
				visual_geometry = true;
			}
		}
		if (input == "35")
		{
			if (visual_graph_theory)
			{
				visual_graph_theory = false;
			}
			else
			{
				visual_graph_theory = true;
			}
		}
		if (input == "36")
		{
			if (visual_internet)
			{
				visual_internet = false;
			}
			else
			{
				visual_internet = true;
			}
		}
		if (input == "37")
		{
			if (visual_java)
			{
				visual_java = false;
			}
			else
			{
				visual_java = true;
			}
		}
		if (input == "38")
		{
			if (visual_linear_algebra)
			{
				visual_linear_algebra = false;
			}
			else
			{
				visual_linear_algebra = true;
			}
		}
		if (input == "39")
		{
			if (visual_logic)
			{
				visual_logic = false;
			}
			else
			{
				visual_logic = true;
			}
		}
		if (input == "40")
		{
			if (visual_marketing)
			{
				visual_marketing = false;
			}
			else
			{
				visual_marketing = true;
			}
		}
		if (input == "41")
		{
			if (visual_materials_science)
			{
				visual_materials_science = false;
			}
			else
			{
				visual_materials_science = true;
			}
		}
		if (input == "42")
		{
			if (visual_mechanical_engineering)
			{
				visual_mechanical_engineering = false;
			}
			else
			{
				visual_mechanical_engineering = true;
			}
		}
		if (input == "43")
		{
			if (visual_medicine)
			{
				visual_medicine = false;
			}
			else
			{
				visual_medicine = true;
			}
		}
		if (input == "44")
		{
			if (visual_nautical)
			{
				visual_nautical = false;
			}
			else
			{
				visual_nautical = true;
			}
		}
		if (input == "45")
		{
			if (visual_networking)
			{
				visual_networking = false;
			}
			else
			{
				visual_networking = true;
			}
		}
		if (input == "46")
		{
			if (visual_pottery)
			{
				visual_pottery = false;
			}
			else
			{
				visual_pottery = true;
			}
		}
		if (input == "47")
		{
			if (visual_philosophy)
			{
				visual_philosophy = false;
			}
			else
			{
				visual_philosophy = true;
			}
		}
		if (input == "48")
		{
			if (visual_photography)
			{
				visual_photography = false;
			}
			else
			{
				visual_photography = true;
			}
		}
		if (input == "49")
		{
			if (visual_physics)
			{
				visual_physics = false;
			}
			else
			{
				visual_physics = true;
			}
		}
		if (input == "50")
		{
			if (visual_political_science)
			{
				visual_political_science = false;
			}
			else
			{
				visual_political_science = true;
			}
		}
		if (input == "51")
		{
			if (visual_probability_and_statistics)
			{
				visual_probability_and_statistics = false;
			}
			else
			{
				visual_probability_and_statistics = true;
			}
		}
		if (input == "52")
		{
			if (visual_programming)
			{
				visual_programming = false;
			}
			else
			{
				visual_programming = true;
			}
		}
		if (input == "53")
		{
			if (visual_psychiatry)
			{
				visual_psychiatry = false;
			}
			else
			{
				visual_psychiatry = true;
			}
		}
		if (input == "54")
		{
			if (visual_psychology)
			{
				visual_psychology = false;
			}
			else
			{
				visual_psychology = true;
			}
		}
		if (input == "55")
		{
			if (visual_sales)
			{
				visual_sales = false;
			}
			else
			{
				visual_sales = true;
			}
		}
		if (input == "56")
		{
			if (visual_stocks)
			{
				visual_stocks = false;
			}
			else
			{
				visual_stocks = true;
			}
		}
		if (input == "57")
		{
			if (visual_structural_engineering)
			{
				visual_structural_engineering = false;
			}
			else
			{
				visual_structural_engineering = true;
			}
		}
		if (input == "58")
		{
			if (visual_theatre)
			{
				visual_theatre = false;
			}
			else
			{
				visual_theatre = true;
			}
		}
		if (input == "59")
		{
			if (visual_trigonometry)
			{
				visual_trigonometry = false;
			}
			else
			{
				visual_trigonometry = true;
			}
		}
		if (input == "60")
		{
			if (visual_wood_working)
			{
				visual_wood_working = false;
			}
			else
			{
				visual_wood_working = true;
			}
		}
		if (input == "61")
		{
			if (visual_writing)
			{
				visual_writing = false;
			}
			else
			{
				visual_writing = true;
			}
		}
		if (input == "62")
		{
			bool boolean2 = false;
			string input2;

			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Visual Interval Setting: ";
				getline(cin, input2);

				if (!input.empty())
				{
					visual_seconds_interval = stoi(input2);
					boolean2 = true;
				}
			}
		}
	}
}

void _Settings::ReadingCheckingSettings()
{
	string input;
	bool boolean = false;

	while (!boolean)
	{
		system("cls");

		cout << endl;
		cout << "=============== Reading Settings ================" << endl;
		cout << "| 1. Enable/Disable Fallacy Checking            |" << endl;
		cout << "| 2. Enable/Disable Bias Checking               |" << endl;
		cout << "| 3. Enable/Disable Literature Device Checking  |" << endl;
		cout << "| 4. Enable/Disable Axiom Checking              |" << endl;
		cout << "| 5. Enable/Disable Abuse Checking              |" << endl;
		cout << "| 6. Enable/Disable Law Checking                |" << endl;
		cout << "| 7. Enable/Disable Algebra                     |" << endl;
		cout << "| 8. Enable/Disable Artificial Intelligence     |" << endl;
		cout << "| 9. Enable/Disable Bash                        |" << endl;
		cout << "| 10. Enable/Disable Batch                      |" << endl;
		cout << "| 11. Enable/Disable Beauty                     |" << endl;
		cout << "| 12. Enable/Disable Biology                    |" << endl;
		cout << "| 13. Enable/Disable Botany                     |" << endl;
		cout << "| 14. Enable/Disable C++                        |" << endl;
		cout << "| 15. Enable/Disable Calculus                   |" << endl;
		cout << "| 16. Enable/Disable Camping                    |" << endl;
		cout << "| 17. Enable/Disable Chemistry                  |" << endl;
		cout << "| 18. Enable/Disable Civil Engineering          |" << endl;
		cout << "| 19. Enable/Disable College Algebra            |" << endl;
		cout << "| 20. Enable/Disable Computer Science           |" << endl;
		cout << "| 21. Enable/Disable Cryptography               |" << endl;
		cout << "| 22. Enable/Disable Dance                      |" << endl;
		cout << "| 23. Enable/Disable Differential Equations     |" << endl;
		cout << "| 24. Enable/Disable Discrete Mathematics       |" << endl;
		cout << "| 25. Enable/Disable Ecology                    |" << endl;
		cout << "| 26. Enable/Disable Economics                  |" << endl;
		cout << "| 27. Enable/Disable Electrical Engineering     |" << endl;
		cout << "| 28. Enable/Disable Engineering                |" << endl;
		cout << "| 29. Enable/Disable Ethics                     |" << endl;
		cout << "| 30. Enable/Disable Finance                    |" << endl;
		cout << "| 31. Enable/Disable Game Theory                |" << endl;
		cout << "| 32. Enable/Disable Geography                  |" << endl;
		cout << "| 33. Enable/Disable Geology                    |" << endl;
		cout << "| 34. Enable/Disable Geometry                   |" << endl;
		cout << "| 35. Enable/Disable Graph Theory               |" << endl;
		cout << "| 36. Enable/Disable Internet                   |" << endl;
		cout << "| 37. Enable/Disable Java                       |" << endl;
		cout << "| 38. Enable/Disable Linear Algebra             |" << endl;
		cout << "| 39. Enable/Disable Logic                      |" << endl;
		cout << "| 40. Enable/Disable Marketing                  |" << endl;
		cout << "| 41. Enable/Disable Materials Science          |" << endl;
		cout << "| 42. Enable/Disable Mechanical Engineering     |" << endl;
		cout << "| 43. Enable/Disable Medicine                   |" << endl;
		cout << "| 44. Enable/Disable Nautical                   |" << endl;
		cout << "| 45. Enable/Disable Networking                 |" << endl;
		cout << "| 46. Enable/Disable Pottery                    |" << endl;
		cout << "| 47. Enable/Disable Philosophy                 |" << endl;
		cout << "| 48. Enable/Disable Photography                |" << endl;
		cout << "| 49. Enable/Disable Physics                    |" << endl;
		cout << "| 50. Enable/Disable Political Science          |" << endl;
		cout << "| 51. Enable/Disable Politics                   |" << endl;
		cout << "| 52. Enable/Disable Probability and Statistics |" << endl;
		cout << "| 53. Enable/Disable Programming                |" << endl;
		cout << "| 54. Enable/Disable Psychiatry                 |" << endl;
		cout << "| 55. Enable/Disable Sales                      |" << endl;
		cout << "| 56. Enable/Disable Stocks                     |" << endl;
		cout << "| 57. Enable/Disable Structural Engineering     |" << endl;
		cout << "| 58. Enable/Disable Theatre                    |" << endl;
		cout << "| 59. Enable/Disable Trigonometry               |" << endl;
		cout << "| 60. Enable/Disable Wood Working               |" << endl;
		cout << "| 61. Enable/Disable Writing                    |" << endl;
		cout << "| 62. Set Reading Interval                      |" << endl;
		cout << "-------------------------------------------------" << endl;
		cout << endl;
		if (reading_fallacy_checking)
			cout << "Reading Fallacy Checking: True" << endl;
		else
			cout << "Reading Fallacy Checking: False" << endl;
		if (reading_bias_checking)
			cout << "Reading Bias Checking: True" << endl;
		else
			cout << "Reading Bias Checking: False" << endl;
		if (reading_literature_device_checking)
			cout << "Reading Literature Device Checking: True" << endl;
		else
			cout << "Reading Literature Device Checking: False" << endl;
		if (reading_axiom_checking)
			cout << "Reading Axiom Checking: True" << endl;
		else
			cout << "Reading Axiom Checking: False" << endl;
		if (reading_abuse_checking)
			cout << "Reading Abuse Checking: True" << endl;
		else
			cout << "Reading Abuse Checking: False" << endl;
		if (reading_law_checking)
			cout << "Reading Law Checking: True" << endl;
		else
			cout << "Reading Law Checking: False" << endl;
		if (reading_dictionary_checking)
			cout << "Reading Dictionary Checking: True" << endl;
		else
			cout << "Reading Dictionary Checking: False" << endl;
		if (reading_aerospace_engineering)
			cout << "Reading Aerospace Engineering: True" << endl;
		else
			cout << "Reading Aerospace Engineering: False" << endl;
		if (reading_algebra)
			cout << "Reading Algebra: True" << endl;
		else
			cout << "Reading Algebra: False" << endl;
		if (reading_artificial_intelligence)
			cout << "Reading Artificial Intelligence: True" << endl;
		else
			cout << "Reading Artificial Intelligence: False" << endl;
		if (reading_bash)
			cout << "Reading BASH: True" << endl;
		else
			cout << "Reading BASH: False" << endl;
		if (reading_batch)
			cout << "Reading BATCH: True" << endl;
		else
			cout << "Reading BATCH: False" << endl;
		if (reading_beauty)
			cout << "Reading Beauty: True" << endl;
		else
			cout << "Reading Beauty: False" << endl;
		if (reading_biology)
			cout << "Reading Biology: True" << endl;
		else
			cout << "Reading Biology: False" << endl;
		if (reading_botany)
			cout << "Reading Botany: True" << endl;
		else
			cout << "Reading Botany: False" << endl;
		if (reading_cpp)
			cout << "Reading C++: True" << endl;
		else
			cout << "Reading C++: False" << endl;
		if (reading_calculus)
			cout << "Reading Calculus: True" << endl;
		else
			cout << "Reading Calculus: False" << endl;
		if (reading_chemistry)
			cout << "Reading Chemistry: True" << endl;
		else
			cout << "Reading Chemistry: False" << endl;
		if (reading_civil_engineering)
			cout << "Reading Civil Engineering: True" << endl;
		else
			cout << "Reading Civil Engineering: False" << endl;
		if (reading_college_algebra)
			cout << "Reading College Algebra: True" << endl;
		else
			cout << "Reading College Algebra: False" << endl;
		if (reading_computer_science)
			cout << "Reading Computer Science: True" << endl;
		else
			cout << "Reading Computer Science: False" << endl;
		if (reading_cryptography)
			cout << "Reading Cryptography: True" << endl;
		else
			cout << "Reading Cryptography: False" << endl;
		if (reading_dance)
			cout << "Reading Dance: True" << endl;
		else
			cout << "Reading Dance: False" << endl;
		if (reading_differential_equations)
			cout << "Reading Differential Equations: True" << endl;
		else
			cout << "Reading Differential Equations: False" << endl;
		if (reading_ecology)
			cout << "Reading Ecology: True" << endl;
		else
			cout << "Reading Ecology: False" << endl;
		if (reading_economics)
			cout << "Reading Economics: True" << endl;
		else
			cout << "Reading Economics: False" << endl;
		if (reading_electrical_engineering)
			cout << "Reading Electrical Engineering: True" << endl;
		else
			cout << "Reading Electrical Engineering: False" << endl;
		if (reading_engineering)
			cout << "Reading Engineering: True" << endl;
		else
			cout << "Reading Engineering: False" << endl;
		if (reading_ethics)
			cout << "Reading Ethics: True" << endl;
		else
			cout << "Reading Ethics: False" << endl;
		if (reading_game_theory)
			cout << "Reading Game Theory: True" << endl;
		else
			cout << "Reading Game Theory: False" << endl;
		if (reading_geography)
			cout << "Reading Geography: True" << endl;
		else
			cout << "Reading Geography: False" << endl;
		if (reading_geology)
			cout << "Reading Geology: True" << endl;
		else
			cout << "Reading Geology: False" << endl;
		if (reading_geometry)
			cout << "Reading Geometry: True" << endl;
		else
			cout << "Reading Geometry: False" << endl;
		if (reading_graph_theory)
			cout << "Reading Graph Theory: True" << endl;
		else
			cout << "Reading Graph Theory: False" << endl;
		if (reading_internet)
			cout << "Reading Internet: True" << endl;
		else
			cout << "Reading Internet: False" << endl;
		if (reading_java)
			cout << "Reading Java: True" << endl;
		else
			cout << "Reading Java: False" << endl;
		if (reading_linear_algebra)
			cout << "Reading Linear Algebra: True" << endl;
		else
			cout << "Reading Linear Algebra: False" << endl;
		if (reading_logic)
			cout << "Reading Logic: True" << endl;
		else
			cout << "Reading Logic: False" << endl;
		if (reading_marketing)
			cout << "Reading Marketing: True" << endl;
		else
			cout << "Reading Marketing: False" << endl;
		if (reading_materials_science)
			cout << "Reading Materials Science: True" << endl;
		else
			cout << "Reading Materials Science: False" << endl;
		if (reading_mechanical_engineering)
			cout << "Reading Mechanical Engineering: True" << endl;
		else
			cout << "Reading Mechanical Engineering: False" << endl;
		if (reading_medicine)
			cout << "Reading Medicine: True" << endl;
		else
			cout << "Reading Medicine: False" << endl;
		if (reading_nautical)
			cout << "Reading Nautical: True" << endl;
		else
			cout << "Reading Nautical: False" << endl;
		if (reading_networking)
			cout << "Reading Networking: True" << endl;
		else
			cout << "Reading Networking: False" << endl;
		if (reading_pottery)
			cout << "Reading pottery: True" << endl;
		else
			cout << "Reading Poetry: False" << endl;
		if (reading_philosophy)
			cout << "Reading Philosophy: True" << endl;
		else
			cout << "Reading Philosophy: False" << endl;
		if (reading_photography)
			cout << "Reading Photography: True" << endl;
		else
			cout << "Reading Photography: False" << endl;
		if (reading_physics)
			cout << "Reading Physics: True" << endl;
		else
			cout << "Reading Physics: False" << endl;
		if (reading_political_science)
			cout << "Reading Political Science: True" << endl;
		else
			cout << "Reading Political Science: False" << endl;
		if (reading_probability_and_statistics)
			cout << "Reading Probability and Statistics: True" << endl;
		else
			cout << "Reading Probability and Statistics: False" << endl;
		if (reading_programming)
			cout << "Reading Programming: True" << endl;
		else
			cout << "Reading Programming: False" << endl;
		if (reading_psychiatry)
			cout << "Reading Psychiatry: True" << endl;
		else
			cout << "Reading Psychiatry: False" << endl;
		if (reading_psychology)
			cout << "Reading Psychology: True" << endl;
		else
			cout << "Reading Psychology: False" << endl;
		if (reading_sales)
			cout << "Reading Sales: True" << endl;
		else
			cout << "Reading Sales: False" << endl;
		if (reading_stocks)
			cout << "Reading Stocks: True" << endl;
		else
			cout << "Reading Stocks: False" << endl;
		if (reading_structural_engineering)
			cout << "Reading Structural Engineering: True" << endl;
		else
			cout << "Reading Structural Engineering: False" << endl;
		if (reading_theatre)
			cout << "Reading Theatre: True" << endl;
		else
			cout << "Reading Theatre: False" << endl;
		if (reading_trigonometry)
			cout << "Reading Trigonometry: True" << endl;
		else
			cout << "Reading Trigonometry: False" << endl;
		if (reading_wood_working)
			cout << "Reading Wood Working: True" << endl;
		else
			cout << "Reading Wood Working: False" << endl;
		if (reading_writing)
			cout << "Reading Writing: True" << endl;
		else
			cout << "Reading Writing: False" << endl;
		cout << "Reading Interval: " << reading_seconds_interval << endl;
		cout << endl;
		cout << "Your Selection: ";
		getline(cin, input);

		if (input == "1")
		{
			if (reading_fallacy_checking)
			{
				reading_fallacy_checking = false;
			}
			else
			{
				reading_fallacy_checking = true;
			}
		}
		if (input == "2")
		{
			if (reading_bias_checking)
			{
				reading_bias_checking = false;
			}
			else
			{
				reading_bias_checking = true;
			}
		}
		if (input == "3")
		{
			if (reading_literature_device_checking)
			{
				reading_literature_device_checking = false;
			}
			else
			{
				reading_literature_device_checking = true;
			}
		}
		if (input == "4")
		{
			if (reading_axiom_checking)
			{
				reading_axiom_checking = false;
			}
			else
			{
				reading_axiom_checking = true;
			}
		}
		if (input == "5")
		{
			if (reading_abuse_checking)
			{
				reading_abuse_checking = false;
			}
			else
			{
				reading_abuse_checking = true;
			}
		}
		if (input == "6")
		{
			if (reading_law_checking)
			{
				reading_law_checking = false;
			}
			else
			{
				reading_law_checking = true;
			}
		}
		if (input == "7")
		{
			if (reading_dictionary_checking)
			{
				reading_dictionary_checking = false;
			}
			else
			{
				reading_dictionary_checking = true;
			}
		}
		if (input == "8")
		{
			if (reading_aerospace_engineering)
			{
				reading_aerospace_engineering = false;
			}
			else
			{
				reading_aerospace_engineering = true;
			}
		}
		if (input == "9")
		{
			if (reading_algebra)
			{
				reading_algebra = false;
			}
			else
			{
				reading_algebra = true;
			}
		}
		if (input == "10")
		{
			if (reading_artificial_intelligence)
			{
				reading_artificial_intelligence = false;
			}
			else
			{
				reading_artificial_intelligence = true;
			}
		}
		if (input == "11")
		{
			if (reading_bash)
			{
				reading_bash = false;
			}
			else
			{
				reading_bash = true;
			}
		}
		if (input == "12")
		{
			if (reading_batch)
			{
				reading_batch = false;
			}
			else
			{
				reading_batch = true;
			}
		}
		if (input == "13")
		{
			if (reading_beauty)
			{
				reading_beauty = false;
			}
			else
			{
				reading_beauty = true;
			}
		}
		if (input == "14")
		{
			if (reading_biology)
			{
				reading_biology = false;
			}
			else
			{
				reading_biology = true;
			}
		}
		if (input == "15")
		{
			if (reading_botany)
			{
				reading_botany = false;
			}
			else
			{
				reading_botany = true;
			}
		}
		if (input == "16")
		{
			if (reading_cpp)
			{
				reading_cpp = false;
			}
			else
			{
				reading_cpp = true;
			}
		}
		if (input == "17")
		{
			if (reading_calculus)
			{
				reading_calculus = false;
			}
			else
			{
				reading_calculus = true;
			}
		}
		if (input == "18")
		{
			if (reading_chemistry)
			{
				reading_chemistry = false;
			}
			else
			{
				reading_chemistry = true;
			}
		}
		if (input == "19")
		{
			if (reading_civil_engineering)
			{
				reading_civil_engineering = false;
			}
			else
			{
				reading_civil_engineering = true;
			}
		}
		if (input == "20")
		{
			if (reading_college_algebra)
			{
				reading_college_algebra = false;
			}
			else
			{
				reading_college_algebra = true;
			}
		}
		if (input == "21")
		{
			if (reading_computer_science)
			{
				reading_computer_science = false;
			}
			else
			{
				reading_computer_science = true;
			}
		}
		if (input == "22")
		{
			if (reading_cryptography)
			{
				reading_cryptography = false;
			}
			else
			{
				reading_cryptography = true;
			}
		}
		if (input == "23")
		{
			if (reading_dance)
			{
				reading_dance = false;
			}
			else
			{
				reading_dance = true;
			}
		}
		if (input == "24")
		{
			if (reading_differential_equations)
			{
				reading_differential_equations = false;
			}
			else
			{
				reading_differential_equations = true;
			}
		}
		if (input == "25")
		{
			if (reading_discrete_mathematics)
			{
				reading_discrete_mathematics = false;
			}
			else
			{
				reading_discrete_mathematics = true;
			}
		}
		if (input == "26")
		{
			if (reading_ecology)
			{
				reading_ecology = false;
			}
			else
			{
				reading_ecology = true;
			}
		}
		if (input == "27")
		{
			if (reading_economics)
			{
				reading_economics = false;
			}
			else
			{
				reading_economics = true;
			}
		}
		if (input == "28")
		{
			if (reading_electrical_engineering)
			{
				reading_electrical_engineering = false;
			}
			else
			{
				reading_electrical_engineering = true;
			}
		}
		if (input == "29")
		{
			if (reading_engineering)
			{
				reading_engineering = false;
			}
			else
			{
				reading_engineering = true;
			}
		}
		if (input == "30")
		{
			if (reading_ethics)
			{
				reading_ethics = false;
			}
			else
			{
				reading_ethics = true;
			}
		}
		if (input == "31")
		{
			if (reading_game_theory)
			{
				reading_game_theory = false;
			}
			else
			{
				reading_game_theory = true;
			}
		}
		if (input == "32")
		{
			if (reading_geography)
			{
				reading_geography = false;
			}
			else
			{
				reading_geography = true;
			}
		}
		if (input == "33")
		{
			if (reading_geology)
			{
				reading_geology = false;
			}
			else
			{
				reading_geology = true;
			}
		}
		if (input == "34")
		{
			if (reading_geometry)
			{
				reading_geometry = false;
			}
			else
			{
				reading_geometry = true;
			}
		}
		if (input == "35")
		{
			if (reading_graph_theory)
			{
				reading_graph_theory = false;
			}
			else
			{
				reading_graph_theory = true;
			}
		}
		if (input == "36")
		{
			if (reading_internet)
			{
				reading_internet = false;
			}
			else
			{
				reading_internet = true;
			}
		}
		if (input == "37")
		{
			if (reading_java)
			{
				reading_java = false;
			}
			else
			{
				reading_java = true;
			}
		}
		if (input == "38")
		{
			if (reading_linear_algebra)
			{
				reading_linear_algebra = false;
			}
			else
			{
				reading_linear_algebra = true;
			}
		}
		if (input == "39")
		{
			if (reading_logic)
			{
				reading_logic = false;
			}
			else
			{
				reading_logic = true;
			}
		}
		if (input == "40")
		{
			if (reading_marketing)
			{
				reading_marketing = false;
			}
			else
			{
				reading_marketing = true;
			}
		}
		if (input == "41")
		{
			if (reading_materials_science)
			{
				reading_materials_science = false;
			}
			else
			{
				reading_materials_science = true;
			}
		}
		if (input == "42")
		{
			if (reading_mechanical_engineering)
			{
				reading_mechanical_engineering = false;
			}
			else
			{
				reading_mechanical_engineering = true;
			}
		}
		if (input == "43")
		{
			if (reading_medicine)
			{
				reading_medicine = false;
			}
			else
			{
				reading_medicine = true;
			}
		}
		if (input == "44")
		{
			if (reading_nautical)
			{
				reading_nautical = false;
			}
			else
			{
				reading_nautical = true;
			}
		}
		if (input == "45")
		{
			if (reading_networking)
			{
				reading_networking = false;
			}
			else
			{
				reading_networking = true;
			}
		}
		if (input == "46")
		{
			if (reading_pottery)
			{
				reading_pottery = false;
			}
			else
			{
				reading_pottery = true;
			}
		}
		if (input == "47")
		{
			if (reading_philosophy)
			{
				reading_philosophy = false;
			}
			else
			{
				reading_philosophy = true;
			}
		}
		if (input == "48")
		{
			if (reading_photography)
			{
				reading_photography = false;
			}
			else
			{
				reading_photography = true;
			}
		}
		if (input == "49")
		{
			if (reading_physics)
			{
				reading_physics = false;
			}
			else
			{
				reading_physics = true;
			}
		}
		if (input == "50")
		{
			if (reading_political_science)
			{
				reading_political_science = false;
			}
			else
			{
				reading_political_science = true;
			}
		}
		if (input == "51")
		{
			if (reading_probability_and_statistics)
			{
				reading_probability_and_statistics = false;
			}
			else
			{
				reading_probability_and_statistics = true;
			}
		}
		if (input == "52")
		{
			if (reading_programming)
			{
				reading_programming = false;
			}
			else
			{
				reading_programming = true;
			}
		}
		if (input == "53")
		{
			if (reading_psychiatry)
			{
				reading_psychiatry = false;
			}
			else
			{
				reading_psychiatry = true;
			}
		}
		if (input == "54")
		{
			if (reading_psychology)
			{
				reading_psychology = false;
			}
			else
			{
				reading_psychology = true;
			}
		}
		if (input == "55")
		{
			if (reading_sales)
			{
				reading_sales = false;
			}
			else
			{
				reading_sales = true;
			}
		}
		if (input == "56")
		{
			if (reading_stocks)
			{
				reading_stocks = false;
			}
			else
			{
				reading_stocks = true;
			}
		}
		if (input == "57")
		{
			if (reading_structural_engineering)
			{
				reading_structural_engineering = false;
			}
			else
			{
				reading_structural_engineering = true;
			}
		}
		if (input == "58")
		{
			if (reading_theatre)
			{
				reading_theatre = false;
			}
			else
			{
				reading_theatre = true;
			}
		}
		if (input == "59")
		{
			if (reading_trigonometry)
			{
				reading_trigonometry = false;
			}
			else
			{
				reading_trigonometry = true;
			}
		}
		if (input == "60")
		{
			if (reading_wood_working)
			{
				reading_wood_working = false;
			}
			else
			{
				reading_wood_working = true;
			}
		}
		if (input == "61")
		{
			if (reading_writing)
			{
				reading_writing = false;
			}
			else
			{
				reading_writing = true;
			}
		}
	}
}

bool _Settings::GetTermsConditions()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 't' && input[x + 1] == 'e' && input[x + 2] == 'r' && input[x + 3] == 'm' && input[x + 4] == 's' && input[x + 5] == '_' && input[x + 6] == 'c' && input[x + 7] == 'o' && input[x + 8] == 'n' && input[x + 9] == 'd' && input[x + 10] == 'i' && input[x + 11] == 't' && input[x + 12] == 'i' && input[x + 13] == 'o' && input[x + 14] == 'n' && input[x + 15] == 's')
				{
					for (int y = x + 19; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true")
						return true;
					else
						return false;
				}
			}
		}
	}
}

bool _Settings::GetObjectDetectionEnable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'v' && input[x + 1] == 'i' && input[x + 2] == 's' && input[x + 3] == 'i' && input[x + 4] == 'o' && input[x + 5] == 'n' && input[x + 6] == '_' && input[x + 7] == 'o' && input[x + 8] == 'b' && input[x + 9] == 'j' && input[x + 10] == 'e' && input[x + 11] == 'c' && input[x + 12] == 't' && input[x + 13] == '_' && input[x + 14] == 'd' && input[x + 15] == 'e' && input[x + 16] == 't' && input[x + 17] == 'e' && input[x + 18] == 'c' && input[x + 19] == 't' && input[x + 20] == 'i' && input[x + 21] == 'o' && input[x + 22] == 'n')
				{
					for (int y = x + 24; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true")
						return true;
					else
						return false;
				}
			}
		}
	}
}

bool _Settings::GetVisualMemoryEnable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'v' && input[x + 1] == 'i' && input[x + 2] == 's' && input[x + 3] == 'u' && input[x + 4] == 'a' && input[x + 5] == 'l' && input[x + 6] == '_' && input[x + 7] == 'm' && input[x + 8] == 'e' && input[x + 9] == 'm' && input[x + 10] == 'o' && input[x + 11] == 'r' && input[x + 12] == 'y')
				{
					for (int y = x + 19; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true")
						return true;
					else
						return false;
				}
			}
		}
	}
}

bool _Settings::GetSoundMemoryEnable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 's' && input[x + 1] == 'o' && input[x + 2] == 'u' && input[x + 3] == 'n' && input[x + 4] == 'd' && input[x + 5] == '_' && input[x + 6] == 'm' && input[x + 7] == 'e' && input[x + 8] == 'm' && input[x + 9] == 'o' && input[x + 10] == 'r' && input[x + 11] == 'y')
				{
					for (int y = x + 19; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true")
						return true;
					else
						return false;
				}
			}
		}
	}
}

bool _Settings::GetSpeechRecognitionEnable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 's' && input[x + 1] == 'p' && input[x + 2] == 'e' && input[x + 3] == 'e' && input[x + 4] == 'c' && input[x + 5] == 'h' && input[x + 6] == '_' && input[x + 7] == 'r' && input[x + 8] == 'e' && input[x + 9] == 'c' && input[x + 10] == 'o' && input[x + 11] == 'g' && input[x + 12] == 'n' && input[x + 13] == 'i' && input[x + 14] == 't' && input[x + 15] == 'i' && input[x + 16] == 'o' && input[x + 17] == 'n')
				{
					for (int y = x + 19; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true")
						return true;
					else
						return false;
				}
			}
		}
	}
}

bool _Settings::GetSpeechLieDetection()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 's' && input[x + 1] == 'p' && input[x + 2] == 'e' && input[x + 3] == 'e' && input[x + 4] == 'c' && input[x + 5] == 'h' && input[x + 6] == '_' && input[x + 7] == 'l' && input[x + 8] == 'i' && input[x + 9] == 'e' && input[x + 10] == '_' && input[x + 11] == 'd' && input[x + 12] == 'e' && input[x + 13] == 't' && input[x + 14] == 'e' && input[x + 15] == 'c' && input[x + 16] == 't' && input[x + 17] == 'i' && input[x + 18] == 'o' && input[x + 19] == 'n')
				{
					for (int y = x + 21; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true")
						return true;
					else
						return false;
				}
			}
		}
	}
}

bool _Settings::GetVisualReasoningEnable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'v' && input[x + 1] == 'i' && input[x + 2] == 's' && input[x + 3] == 'u' && input[x + 4] == 'a' && input[x + 5] == 'l' && input[x + 6] == '_' && input[x + 7] == 'r' && input[x + 8] == 'e' && input[x + 9] == 'a' && input[x + 10] == 's' && input[x + 11] == 'o' && input[x + 12] == 'n' && input[x + 13] == 'i' && input[x + 14] == 'n' && input[x + 15] == 'g')
				{
					for (int y = x + 17; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true")
						return true;
					else
						return false;
				}
			}
		}
	}
}

bool _Settings::GetComputerUseEnable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'o' && input[x + 2] == 'm' && input[x + 3] == 'p' && input[x + 4] == 'u' && input[x + 5] == 't' && input[x + 6] == 'e' && input[x + 7] == 'r' && input[x + 8] == '_' && input[x + 9] == 'u' && input[x + 10] == 's' && input[x + 11] == 'e')
				{
					for (int y = x + 13; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true")
						return true;
					else
						return false;
				}
			}
		}
	}
}

bool _Settings::GetReadingFallacyCheckEnable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'r' && input[x + 1] == 'e' && input[x + 2] == 'a' && input[x + 3] == 'd' && input[x + 4] == 'i' && input[x + 5] == 'n' && input[x + 6] == 'g' && input[x + 7] == '_' && input[x + 8] == 'f' && input[x + 9] == 'a' && input[x + 10] == 'l' && input[x + 11] == 'l' && input[x + 12] == 'a' && input[x + 13] == 'c' && input[x + 14] == 'y' && input[x + 15] == '_' && input[x + 16] == 'c' && input[x + 17] == 'h' && input[x + 18] == 'e' && input[x + 19] == 'c' && input[x + 20] == 'k')
				{
					for (int y = x + 22; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true")
						return true;
					else
						return false;
				}
			}
		}
	}
}

bool _Settings::GetEthicsCheckEnable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'e' && input[x + 1] == 't' && input[x + 2] == 'h' && input[x + 3] == 'i' && input[x + 4] == 'c' && input[x + 5] == 's' && input[x + 6] == '_' && input[x + 7] == 'c' && input[x + 8] == 'h' && input[x + 9] == 'e' && input[x + 10] == 'c' && input[x + 11] == 'k' && input[x + 12] == '_' && input[x + 13] == 'e' && input[x + 14] == 'n' && input[x + 15] == 'a' && input[x + 16] == 'b' && input[x + 17] == 'l' && input[x + 18] == 'e' && input[x + 19] == 'd')
				{
					for (int y = x + 21; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true")
						return true;
					else
						return false;
				}
			}
		}
	}
}

bool _Settings::GetGPUAccellerationEnable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'u' && input[x + 2] == 'd' && input[x + 3] == 'a' && input[x + 4] == '_' && input[x + 5] == 'a' && input[x + 6] == 'c' && input[x + 7] == 'c' && input[x + 8] == 'e' && input[x + 9] == 'l' && input[x + 10] == 'l' && input[x + 11] == 'e' && input[x + 12] == 'r' && input[x + 13] == 'a' && input[x + 14] == 't' && input[x + 15] == 'i' && input[x + 16] == 'o' && input[x + 17] == 'n')
				{
					for (int y = x + 19; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true")
						return true;
					else
						return false;
				}
			}
		}
	}
}

string _Settings::GetMySQLHostname()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'm' && input[x + 1] == 'y' && input[x + 2] == 's' && input[x + 3] == 'q' && input[x + 4] == 'l' && input[x + 5] == '_' && input[x + 6] == 'h' && input[x + 7] == 'o' && input[x + 8] == 's' && input[x + 9] == 't' && input[x + 10] == 'n' && input[x + 11] == 'a' && input[x + 12] == 'm' && input[x + 13] == 'e')
				{
					for (int y = x + 15; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetMySQLUsername()
{
	fstream mysql_username;
	string input;
	string username;
	mysql_username.open("./settings.txt", ios::in);

	if (mysql_username.is_open())
	{
		while (getline(mysql_username, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'm' && input[x + 1] == 'y' && input[x + 2] == 's' && input[x + 3] == 'q' && input[x + 4] == 'l' && input[x + 5] == '_' && input[x + 6] == 'u' && input[x + 7] == 's' && input[x + 8] == 'e' && input[x + 9] == 'r' && input[x + 10] == 'n' && input[x + 11] == 'a' && input[x + 12] == 'm' && input[x + 13] == 'e')
				{
					for (int y = x + 15; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							username += input[y];
						}
					}
					return username;
				}
			}
		}
	}
	return username;
}

string _Settings::GetMySQLPassword()
{
	fstream mysql_password;
	string input;
	string password;
	mysql_password.open("./settings.txt", ios::in);

	if (mysql_password.is_open())
	{
		while (getline(mysql_password, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'm' && input[x + 1] == 'y' && input[x + 2] == 's' && input[x + 3] == 'q' && input[x + 4] == 'l' && input[x + 5] == '_' && input[x + 6] == 'p' && input[x + 7] == 'a' && input[x + 8] == 's' && input[x + 9] == 's' && input[x + 10] == 'w' && input[x + 11] == 'o' && input[x + 12] == 'r' && input[x + 13] == 'd')
				{
					for (int y = x + 15; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							password += input[y];
						}
					}
					return password;
				}
			}
		}
	}
	return password;
}

string _Settings::GetCamera1()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'a' && input[x + 2] == 'm' && input[x + 3] == 'e' && input[x + 4] == 'r' && input[x + 5] == 'a' && input[x + 6] == '1')
				{
					for (int y = x + 8; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

bool _Settings::GetCamera1Enable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'a' && input[x + 2] == 'm' && input[x + 3] == 'e' && input[x + 4] == 'r' && input[x + 5] == 'a' && input[x + 6] == '1' && input[x + 7] == '_' && input[x + 8] == 'e' && input[x + 9] == 'n' && input[x + 10] == 'a' && input[x + 11] == 'b' && input[x + 12] == 'l' && input[x + 13] == 'e' && input[x + 14] == 'd')
				{
					for (int y = x + 16; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true")
						return true;
					else
						return false;
				}
			}
		}
	}
}

string _Settings::GetCamera2()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'a' && input[x + 2] == 'm' && input[x + 3] == 'e' && input[x + 4] == 'r' && input[x + 5] == 'a' && input[x + 6] == '2')
				{
					for (int y = x + 8; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

bool _Settings::GetCamera2Enable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'a' && input[x + 2] == 'm' && input[x + 3] == 'e' && input[x + 4] == 'r' && input[x + 5] == 'a' && input[x + 6] == '2' && input[x + 7] == '_' && input[x + 8] == 'e' && input[x + 9] == 'n' && input[x + 10] == 'a' && input[x + 11] == 'b' && input[x + 12] == 'l' && input[x + 13] == 'e' && input[x + 14] == 'd')
				{
					for (int y = x + 16; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true")
						return true;
					else
						return false;
				}
			}
		}
	}
}

string _Settings::GetVisionDirectory()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'v' && input[x + 1] == 'i' && input[x + 2] == 's' && input[x + 3] == 'i' && input[x + 4] == 'o' && input[x + 5] == 'n' && input[x + 6] == '_' && input[x + 7] == 'm' && input[x + 8] == 'e' && input[x + 9] == 'm' && input[x + 10] == 'o' && input[x + 11] == 'r' && input[x + 12] == 'y' && input[x + 13] == '_' && input[x + 14] == 'd' && input[x + 15] == 'i' && input[x + 16] == 'r' && input[x + 17] == 'e' && input[x + 18] == 'c' && input[x + 19] == 't' && input[x + 20] == 'o' && input[x + 21] == 'r' && input[x + 22] == 'y')
				{
					for (int y = x + 24; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetSoundDirectory()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 's' && input[x + 1] == 'o' && input[x + 2] == 'u' && input[x + 3] == 'n' && input[x + 4] == 'd' && input[x + 5] == '_' && input[x + 6] == 'd' && input[x + 7] == 'i' && input[x + 8] == 'r' && input[x + 9] == 'e' && input[x + 10] == 'c' && input[x + 11] == 't' && input[x + 12] == 'o' && input[x + 13] == 'r' && input[x + 14] == 'y')
				{
					for (int y = x + 16; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetSpeechDirectory()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 's' && input[x + 1] == 'p' && input[x + 2] == 'e' && input[x + 3] == 'e' && input[x + 4] == 'c' && input[x + 5] == 'h' && input[x + 6] == '_' && input[x + 7] == 'd' && input[x + 8] == 'i' && input[x + 9] == 'r' && input[x + 10] == 'e' && input[x + 11] == 'c' && input[x + 12] == 't' && input[x + 13] == 'o' && input[x + 14] == 'r' && input[x + 15] == 'y')
				{
					for (int y = x + 17; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetVideoFrameRate()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'a' && input[x + 2] == 'm' && input[x + 3] == 'e' && input[x + 4] == 'r' && input[x + 5] == 'a' && input[x + 6] == '1' && input[x + 7] == '_' && input[x + 8] == 'f' && input[x + 9] == 'p' && input[x + 10] == 's')
				{
					for (int y = x + 12; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetShortTermMemoryTime()
{
	fstream settings;
	string input;
	string temp;
	//settings.open("./settings.txt", ios::in);

	//if (settings.is_open())
	//{
	//	while (getline(settings, input))
	//	{
	//		for (int x = 0; x <= input.length(); x++)
	//		{
	//			{
	//				for (int y = x + 16; y <= input.length(); y++)
	//				{
	//					if (input[y] != '\"')
	//					{
	//						temp += input[y];
	//					}
	//				}
	//				return temp;
	//			}
	//		}
	//	}
	//}
	return temp;
}

// Memory Management Settings
//	1.	Enable FTP Server
//	2.	Set hostname or ip address
//	3.	Set username
//	4.	Set password
//	5.	Set vision directory
//	6.	Set sound directory
//	7.	Set image storage time or storage size
//	8.	Set sound storage time or storage size
//	9.	Set backup times
//	10. Test Connection
void _Settings::MemoryManagementSettings()
{
	string input;
	string input2;
	bool ftp_enabled = _Settings::GetFTPEnabled();
	string ftp_hostname = _Settings::GetFTPHostname();
	string ftp_username = _Settings::GetFTPUsername();
	string ftp_password = _Settings::GetFTPPassword();
	string vision_ftp_directory = _Settings::GetVisionFTPDirectory();
	string sound_ftp_directory = _Settings::GetSoundFTPDirectory();
	string vision_storage_limit = _Settings::GetVisionStorageLimit();
	string sound_storage_limit = _Settings::GetSoundStorageLimit();
	bool boolean = false;
	bool boolean2;
	bool boolean3;
	bool boolean4;
	bool boolean5;
	bool boolean6;
	bool boolean7;
	bool boolean8;
	bool boolean9;

	while (!boolean)
	{
		boolean2 = false;
		boolean3 = false;
		boolean4 = false;
		boolean5 = false;
		boolean6 = false;
		boolean7 = false;
		boolean8 = false;
		boolean9 = false;

		cout << endl;
		cout << "Memory Management Settings" << endl;
		cout << " 1.  Enable FTP Backup" << endl;
		cout << " 2.  Set FTP Hostname or IP Address" << endl;
		cout << " 3.  Set FTP Username" << endl;
		cout << " 4.  Set FTP Password" << endl;
		cout << " 5.  FTP Vision Directory" << endl;
		cout << " 6.  FTP Sound Directory" << endl;
		cout << " 7.  FTP Vision Storage Size" << endl;
		cout << " 8.  FTP Sound Storage Size" << endl;
		cout << "--------------------------------------" << endl;
		cout << " 0. Back to main menu" << endl;
		cout << " 10. Test Connection" << endl;
		cout << endl;
		if (ftp_enabled)
			cout << "FTP Enabled: True" << endl;
		else
			cout << "FTP Enabled: false" << endl;
		cout << "FTP Hostname: " << ftp_hostname << endl;
		cout << "FTP Username: " << ftp_username << endl;
		cout << "FTP Password: " << ftp_password << endl;
		cout << "FTP Vision Directory: " << vision_ftp_directory << endl;
		cout << "FTP Sound Directory: " << sound_ftp_directory << endl;
		cout << "FTP Vision Storage Limit: " << vision_storage_limit << endl;
		cout << "FTP Sound Storage Limit: " << sound_storage_limit << endl;
		cout << endl;
		cout << "Your Selection: ";
		getline(cin, input);

		if (input == "1")
		{
			if (ftp_enabled)
				ftp_enabled = false;
			else
				ftp_enabled = true;
		}
		else if (input == "2")
		{
			while (!boolean2)
			{
				cout << endl;
				cout << "FTP Hostname: ";
				getline(cin, input2);

				if (input2 != "")
				{
					boolean2 = true;
					ftp_hostname = input2;
					_Settings::SaveSettings();
				}
			}
		}
		else if (input == "3")
		{
			while (!boolean3)
			{
				cout << endl;
				cout << "FTP Username: ";
				getline(cin, input2);

				if (input2 != "")
				{
					boolean3 = true;
					ftp_username = input2;
					_Settings::SaveSettings();
				}
			}
		}
		else if (input == "4")
		{
			while (!boolean4)
			{
				cout << endl;
				cout << "FTP Password: ";
				getline(cin, input2);

				if (input2 != "")
				{
					boolean4 = true;
					ftp_password = input2;
					_Settings::SaveSettings();
				}
			}
		}
		else if (input == "5")
		{
			while (!boolean5)
			{
				cout << endl;
				cout << "FTP Vision Directory: ";
				getline(cin, input2);

				if (input2 != "")
				{
					boolean5 = true;
					vision_ftp_directory = input2;
					_Settings::SaveSettings();
				}
			}
		}
		else if (input == "6")
		{
			while (!boolean6)
			{
				cout << endl;
				cout << "FTP Sound Directory: ";
				getline(cin, input2);

				if (input2 != "")
				{
					boolean6 = true;
					sound_ftp_directory = input2;
					_Settings::SaveSettings();
				}
			}
		}
		else if (input == "7")
		{
			while (!boolean7)
			{
				cout << endl;
				cout << "Vision Storage Limit [MB]: ";
				getline(cin, input2);

				if (input2 != "")
				{
					boolean7 = true;
					vision_storage_limit = input2;
					_Settings::SaveSettings();
				}
			}
		}
		else if (input == "8")
		{
			while (!boolean8)
			{
				cout << endl;
				cout << "Sound Storage Limit [MB]: ";
				getline(cin, input2);

				if (input2 != "")
				{
					boolean8 = true;
					sound_storage_limit = input2;
					_Settings::SaveSettings();
				}
			}
		}
		else if (input == "0")
		{
			_Settings::SaveSettings();
			boolean = true;
		}
	}

	return;
}

bool _Settings::GetFTPEnabled()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'f' && input[x + 1] == 't' && input[x + 2] == 'p' && input[x + 3] == '_' && input[x + 4] == 'e' && input[x + 5] == 'n' && input[x + 6] == 'a' && input[x + 7] == 'b' && input[x + 8] == 'l' && input[x + 9] == 'e' && input[x + 10] == 'd')
				{
					for (int y = x + 12; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true")
						return true;
					else
						return false;
				}
			}
		}
	}

	return false;
}

string _Settings::GetFTPHostname()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'f' && input[x + 1] == 't' && input[x + 2] == 'p' && input[x + 3] == '_' && input[x + 4] == 'h' && input[x + 5] == 'o' && input[x + 6] == 's' && input[x + 7] == 't' && input[x + 8] == 'n' && input[x + 9] == 'a' && input[x + 10] == 'm' && input[x + 11] == 'e')
				{
					for (int y = x + 13; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetFTPUsername()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'f' && input[x + 1] == 't' && input[x + 2] == 'p' && input[x + 3] == '_' && input[x + 4] == 'u' && input[x + 5] == 's' && input[x + 6] == 'e' && input[x + 7] == 'r' && input[x + 8] == 'n' && input[x + 9] == 'a' && input[x + 10] == 'm' && input[x + 11] == 'e')
				{
					for (int y = x + 13; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetFTPPassword()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'f' && input[x + 1] == 't' && input[x + 2] == 'p' && input[x + 3] == '_' && input[x + 4] == 'p' && input[x + 5] == 'a' && input[x + 6] == 's' && input[x + 7] == 's' && input[x + 8] == 'w' && input[x + 9] == 'o' && input[x + 10] == 'r' && input[x + 11] == 'd')
				{
					for (int y = x + 13; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetVisionFTPDirectory()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'f' && input[x + 1] == 't' && input[x + 2] == 'p' && input[x + 3] == '_' && input[x + 4] == 'v' && input[x + 5] == 'i' && input[x + 6] == 's' && input[x + 7] == 'i' && input[x + 8] == 'o' && input[x + 9] == 'n' && input[x + 10] == '_' && input[x + 11] == 'd' && input[x + 12] == 'i' && input[x + 13] == 'r' && input[x + 14] == 'e' && input[x + 15] == 'c' && input[x + 16] == 't' && input[x + 17] == 'o' && input[x + 18] == 'r' && input[x + 19] == 'y')
				{
					for (int y = x + 21; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetSoundFTPDirectory()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'f' && input[x + 1] == 't' && input[x + 2] == 'p' && input[x + 3] == '_' && input[x + 4] == 's' && input[x + 5] == 'o' && input[x + 6] == 'u' && input[x + 7] == 'n' && input[x + 8] == 'd' && input[x + 9] == '_' && input[x + 10] == 'd' && input[x + 11] == 'i' && input[x + 12] == 'r' && input[x + 13] == 'e' && input[x + 14] == 'c' && input[x + 15] == 't' && input[x + 16] == 'o' && input[x + 17] == 'r' && input[x + 18] == 'y')
				{
					for (int y = x + 20; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetVisionStorageLimit()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'f' && input[x + 1] == 't' && input[x + 2] == 'p' && input[x + 3] == '_' && input[x + 4] == 'v' && input[x + 5] == 'i' && input[x + 6] == 's' && input[x + 7] == 'i' && input[x + 8] == 'o' && input[x + 9] == 'n' && input[x + 10] == '_' && input[x + 11] == 's' && input[x + 12] == 't' && input[x + 13] == 'o' && input[x + 14] == 'r' && input[x + 15] == 'a' && input[x + 16] == 'g' && input[x + 17] == 'e' && input[x + 18] == '_' && input[x + 19] == 'l' && input[x + 20] == 'i' && input[x + 21] == 'm' && input[x + 22] == 'i' && input[x + 23] == 't')
				{
					for (int y = x + 25; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetSoundStorageLimit()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'f' && input[x + 1] == 't' && input[x + 2] == 'p' && input[x + 3] == '_' && input[x + 4] == 's' && input[x + 5] == 'o' && input[x + 6] == 'u' && input[x + 7] == 'n' && input[x + 8] == 'd' && input[x + 9] == '_' && input[x + 10] == 's' && input[x + 11] == 't' && input[x + 12] == 'o' && input[x + 13] == 'r' && input[x + 14] == 'a' && input[x + 15] == 'g' && input[x + 16] == 'e' && input[x + 17] == '_' && input[x + 18] == 'l' && input[x + 19] == 'i' && input[x + 20] == 'm' && input[x + 21] == 'i' && input[x + 22] == 't')
				{
					for (int y = x + 24; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

void _Settings::MySQLSettings()
{
	string input;
	string input2;
	bool boolean = false;
	bool boolean2 = false;

	while (!boolean)
	{
		cout << endl;
		cout << "MySQL Settings" << endl;
		cout << "1. MySQL Hostname" << endl;
		cout << "2. MySQL Username" << endl;
		cout << "3. MySQL Password" << endl;
		cout << "4. Vision Database" << endl;
		cout << "5. Sound Database" << endl;
		cout << "6. Speech Database" << endl;
		cout << "7. Working Memory Database" << endl;
		cout << "8. Short-Term Database" << endl;
		cout << "9. Long-Term Memory Database" << endl;
		cout << "--------------------------------------" << endl;
		cout << " 0. Back to main menu" << endl;
		cout << " 10. Test Connection" << endl;
		cout << endl;
		cout << "MySQL Hostname: " << mysql_hostname << endl;
		cout << "MySQL Username: " << mysql_username << endl;
		cout << "MySQL Password: " << mysql_password << endl;
		cout << "MySQL Vision Database: " << mysql_vision_database << endl;
		cout << "MySQL Sound Database: " << mysql_sound_database << endl;
		//cout << "MySQL Speech Database: " << mysql_speech_database << endl;
		cout << "MySQL Working Memory Database: " << mysql_working_memory_database << endl;
		cout << "MySQL Short-Term Memory Database: " << mysql_short_term_memory_database << endl;
		cout << "MySQL Long-Term Memory Database: " << mysql_long_term_memory_database << endl;
		cout << endl;
		cout << "Your Selection: ";
		getline(cin, input);

		if (input == "1")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "MySQL Hostname" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					mysql_hostname = input2;
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
		if (input == "2")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "MySQL Username" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					mysql_username = input2;
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
		if (input == "3")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "MySQL Password" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					mysql_password = input2;
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
		if (input == "4")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "MySQL Vision Database" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					mysql_vision_database = input2;
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
		if (input == "5")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "MySQL Sound Database" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					mysql_sound_database = input2;
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
		if (input == "6")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "MySQL Speech Database" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					//mysql_speech_database = input2;
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
		if (input == "7")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "MySQL Working Memory Database" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					mysql_working_memory_database = input2;
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
		if (input == "8")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "MySQL Short-Term Memory Database" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					mysql_short_term_memory_database = input2;
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
		if (input == "9")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "MySQL Long-Term Memory Database" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					mysql_long_term_memory_database = input2;
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
		if (input == "0")
		{
			_Settings::SaveSettings();
			boolean = true;
		}
	}
}

// Settings menu for computer settings
void _Settings::ComputerSettings()
{
	string input;
	string input2;
	bool boolean = false;
	bool boolean2 = false;

	while (!boolean)
	{
		system("cls");

		//private_computer = _Settings::GetPrivateComputer();
		//computer_username = _Settings::GetComputerUsername();
		//computer_password = _Settings::GetComputerPassword();

		cout << endl;
		cout << "Computer Settings" << endl;
		cout << "1. Privately Owned Computer Enable" << endl;
		cout << "2. Set Hostname" << endl;
		cout << "3. Get Username" << endl;
		cout << "4. Get Password" << endl;
		cout << "-------------------------------------" << endl;
		cout << "0. Main Menu" << endl;
		cout << endl;
		cout << "Computer Settings" << endl;
		if (private_computer)
			cout << "Privately Owned: True" << endl;
		else
			cout << "Privately Owned: false" << endl;
		cout << "Computer Hostname: " << computer_hostname << endl;
		cout << "Computer Username: " << computer_username << endl;
		//cout << "Computer Password: " << computer_password << endl;
		cout << endl;
		cout << "Your Selection: ";
		getline(cin, input);

		if (input == "1")
		{
			if (private_computer)
				private_computer = false;
			else
				private_computer = true;
			_Settings::SaveSettings();
		}
		else if (input == "2")
		{
			while (!boolean2)
			{
				system("cls");

				cout << "Computer Hostname" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					computer_hostname = input2;
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
		else if (input == "3")
		{
			while (!boolean2)
			{
				system("cls");

				cout << "Computer Username" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					computer_username = input2;
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
		else if (input == "4")
		{
			while (!boolean2)
			{
				system("cls");

				cout << "Computer Password" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					computer_password = input2;
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
		else if (input == "0")
		{
			_Settings::SaveSettings();
			boolean = true;
		}
		else
		{

		}
	}
}

void _Settings::WhisperServerSettings()
{
	string input;
	string input2;
	bool boolean = false;
	bool boolean2 = false;

	while (!boolean)
	{
		system("cls");

		cout << endl;
		cout << "Whisper Server Settings" << endl;
		cout << "1. Server Hostname" << endl;
		cout << "2. Server Username" << endl;
		cout << "3. Server Password" << endl;
		cout << "4. Whisper Model Location" << endl;
		cout << "5. Whisper Prompt Seconds" << endl;
		cout << "6. Whisper Command Seconds" << endl;
		//cout << "4. Microphone Sample Rate" << endl;
		//cout << "5. Microphone Number Channels" << endl;
		//cout << "6. Microphone Bits Per Sample" << endl;
		cout << "-------------------------------------" << endl;
		cout << "0. Main Menu" << endl;
		cout << endl;
		cout << "Whisper Server Settings" << endl;
		cout << "Whisper Hostname: " << whisper_hostname << endl;
		cout << "Whisper Username: " << whisper_username << endl;
		cout << "Whisper Password: " << whisper_password << endl;
		cout << "Whisper Model Location: " << whisper_model << endl;
		cout << "Whisper Prompt Seconds: " << whisper_prompt_seconds << endl;
		cout << "Whisper Command Seconds: " << whisper_command_seconds << endl;
		//cout << "Microphone Sample Rate: " << mic_sample_rate << endl;
		//cout << "Microphone Channels: " << mic_num_channels << endl;
		//cout << "Microphone Bits Per Sample: " << mic_bits_per_sample << endl;
		cout << endl;
		cout << "Your Selection: ";
		getline(cin, input);

		if (input == "1")
		{
			while (!boolean2)
			{
				system("cls");

				cout << "Whisper Server Hostname" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					whisper_hostname = input2;
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
		else if (input == "2")
		{
			while (!boolean2)
			{
				system("cls");

				cout << "Whisper Server Username" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					whisper_username = input2;
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
		else if (input == "3")
		{
			while (!boolean2)
			{
				system("cls");

				cout << "Whisper Model Password" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					whisper_password = input2;
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
		else if (input == "4")
		{
			while (!boolean2)
			{
				system("cls");

				cout << "Whisper Model Location" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					whisper_model = input2;
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
		else if (input == "5")
		{
			while (!boolean2)
			{
				system("cls");

				cout << "Whisper Prompt Seconds" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					whisper_prompt_seconds = stoi(input2);
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
		else if (input == "6")
		{
			while (!boolean2)
			{
				system("cls");

				cout << "Whisper Command Seconds" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					whisper_command_seconds = stoi(input2);
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
		//else if (input == "3")
		//{
		//	while (!boolean2)
		//	{
		//		system("cls");

		//		cout << "Microhone Sample Rate" << endl;
		//		cout << endl;
		//		cout << "Your Selection: ";
		//		getline(cin, input2);

		//		if (input2 != "")
		//		{
		//			mic_sample_rate = stoi(input2);
		//			boolean2 = true;
		//			_Settings::SaveSettings();
		//		}
		//	}
		//}
		//else if (input == "3")
		//{
		//	while (!boolean2)
		//	{
		//		system("cls");

		//		cout << "Microphone Number Channels" << endl;
		//		cout << endl;
		//		cout << "Your Selection: ";
		//		getline(cin, input2);

		//		if (input2 != "")
		//		{
		//			mic_num_channels = stoi(input2);
		//			boolean2 = true;
		//			_Settings::SaveSettings();
		//		}
		//	}
		//}
		//else if (input == "3")
		//{
		//	while (!boolean2)
		//	{
		//		system("cls");

		//		cout << "Microphone Bits Per Channel" << endl;
		//		cout << endl;
		//		cout << "Your Selection: ";
		//		getline(cin, input2);

		//		if (input2 != "")
		//		{
		//			mic_bits_per_sample = stoi(input2);
		//			boolean2 = true;
		//			_Settings::SaveSettings();
		//		}
		//	}
		//}
		else if (input == "0")
		{
			_Settings::SaveSettings();
			boolean = true;
		}
		else
		{
			cout << "Invalid Option..." << endl;
		}
	}
}

void _Settings::LLMServerSettings()
{
	string input;
	string input2;
	bool boolean = false;
	bool boolean2 = false;

	while (!boolean)
	{
		system("cls");

		boolean2 = false;

		cout << endl;
		cout << "LLM Server Settings" << endl;
		cout << "0. Commands Threads" << endl;
		cout << "1. Local Server Hostname" << endl;
		cout << "2. Remote Server Hostname" << endl;
		cout << "3. Enable Local LLM Server" << endl;
		cout << "4. Enable Remote LLM Server" << endl;
		cout << "5. Local LLM Model" << endl;
		cout << "6. Remote LLM Settings" << endl;
		cout << "7. Image Model" << endl;
		cout << "8. Ollama API" << endl;
		cout << "-------------------------------------" << endl;
		cout << "0. Main Menu" << endl;
		cout << endl;
		cout << "LLM Server Settings" << endl;
		if (typing_commands_threads)
			cout << "Command Threads: True" << endl;
		else
			cout << "Command Threads: False" << endl;
		cout << "LLM Hostname: " << llm_hostname << endl;
		cout << "Remote LLM Hostnames: " << endl;
		for (int i = 0; i < remote_llm_hostnames.size(); i++)
		{
			cout << i << ". " << remote_llm_hostnames[i] << endl;
		}
		if (llm_server_enabled)
			cout << "Local LLM Server: True" << endl;
		else
			cout << "Local LLM Server: False" << endl;
		if (remote_llm_server_enabled)
			cout << "Remote LLM Server: True" << endl;
		else
			cout << "Remote LLM Server: False" << endl;
		cout << "Local LLM Model: " << llm_model << endl;
		cout << "Remote LLM Model: " << remote_llm_model << endl;
		cout << "Image LLM Model: " << llm_model_image << endl;
		cout << endl;
		cout << "Your Selection: ";
		getline(cin, input);

		if (input == "0")
		{
			if (typing_commands_threads)
				typing_commands_threads = false;
			else
				typing_commands_threads = true;
		}
		if (input == "1")
		{
			while (!boolean2)
			{
				system("cls");

				cout << "LLM Server Hostname" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					llm_hostname = input2;
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
		else if (input == "2")
		{
			while (!boolean2)
			{
				//system("cls");

				//cout << "LLM Remote Server Hostname" << endl;
				//cout << endl;
				//cout << "Your Selection: ";
				//getline(cin, input2);

				//if (input2 != "")
				//{
				//	remote_llm_hostname = input2;
				//	boolean2 = true;
				//	_Settings::SaveSettings();
				//}
			}
		}
		else if (input == "3")
		{
			if (llm_server_enabled)
				llm_server_enabled = false;
			else
				llm_server_enabled = true;
		}
		else if (input == "4")
		{
			if (remote_llm_server_enabled)
				remote_llm_server_enabled = false;
			else
				remote_llm_server_enabled = true;
		}
		else if (input == "5")
		{
			while (!boolean2)
			{
				system("cls");

				cout << "Local LLM Model" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					llm_model = input2;
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
		else if (input == "6")
		{
			bool boolean3 = false;
			string input3;

			while (!boolean2)
			{
				system("cls");

				cout << "Remote LLM Model" << endl;
				cout << "1. Add LLM Server" << endl;
				cout << "2. Remove LLM Servers" << endl;
				cout << "0. Set Default Server" << "" << endl;
				cout << "-----------------------" << endl;
				cout << "0. Return to Main Menu" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 == "1")
				{
					while (!boolean3)
					{
						cout << "Remote LLM Server (IP or Hostname): ";
						getline(cin, input3);

						// Basic Input Validation
						if (input3.empty())
						{
							cout << "Input cannot be empty. Please try again." << endl;
							continue; // Skip to the next iteration of the loop
						}

						// Validate IP/Hostname
						if (!_Utilities::isValidHostnameOrIP(input3))
						{
							cout << "Invalid hostname or IP address format." << endl;
							continue;
						}

						// Test if server is up
						bool serverUp = _Utilities::isServerUp(input3);

						if (serverUp)
						{
							cout << "Server is up." << endl;
						}
						else
						{
							cout << "Server is down." << endl;
							char response;
							cout << "Add server anyway? (y/n): ";
							cin >> response;
							cin.ignore(); // Consume the newline character

							if (tolower(response) != 'y')
							{
								cout << "Server not added." << endl;
								continue; // Skip to the next iteration
							}
							else
							{
								cout << "Adding server despite being down." << endl;
							}
						}

						// Add the input to the vector
						remote_llm_hostnames.push_back(input3);

						boolean3 = true; // Exit the loop after a valid input
						_Settings::SaveSettings();  // Save settings immediately after adding
					}
				}
				if (input2 == "2")
				{
					while (!boolean3)
					{
						system("cls");

						for (int x = 0; x < remote_llm_model.size(); x++)
						{
							cout << x + 1 << ". " << remote_llm_hostnames[x] << endl;
						}

						cout << "Remove LLM Server to Delete: ";
						getline(cin, input3);

						try
						{
							int index_to_remove = stoi(input3) - 1; // Convert input to index (0-based)

							if (index_to_remove >= 0 && index_to_remove < remote_llm_model.size())
							{
								// Remove the element at the specified index
								remote_llm_model.erase(remote_llm_model.begin() + index_to_remove);
								remote_llm_hostnames.erase(remote_llm_hostnames.begin() + index_to_remove);

								//Optional:  Provide feedback to the user
								cout << "LLM server removed." << endl;

								//Consider exiting the loop or adding a confirmation mechanism
								//boolean3 = true;  // Exit the loop after removing one server.  Uncomment if you want only one removal per run.
									cout << "Press 'q' to quit or enter a number to remove another server." << endl;
								getline(cin, input3);
								if (input3 == "q" || input3 == "Q")
								{
									boolean3 = true; // Exit the loop
								}


							}
							else
							{
								cout << "Invalid server number.  Please enter a valid number." << endl;
								//Optionally delay before repeating
								//system("pause");  //Allows user to read message. Comment out if not wanted.
							}
						}
						catch (const std::invalid_argument& e)
						{
							cout << "Invalid input.  Please enter a number." << endl;
							//Optionally delay before repeating
							//system("pause");
						}
						catch (const std::out_of_range& e)
						{
							cout << "Invalid input.  Please enter a number within the valid range." << endl;
						}
					}
					_Settings::SaveSettings();
				}
				if (input2 == "0")
				{
					system("cls");
					for (int x = 0; x < remote_llm_model.size(); x++)
					{
						cout << x + 1 << ". " << remote_llm_hostnames[x] << endl;
					}
					cout << "Set Default LLM Server: ";
					getline(cin, input3);
					try
					{
						int index_to_set = stoi(input3) - 1; // Convert input to index (0-based)
						if (index_to_set >= 0 && index_to_set < remote_llm_model.size())
						{
							// Set the default server
							llm_default_hostname = remote_llm_hostnames[index_to_set];
							//Provide feedback to the user
							cout << "Default LLM server set to " << llm_default_hostname << "." << endl;
							boolean2 = true; // Exit the outer loop after setting default
							_Settings::SaveSettings();
						}
						else
						{
							cout << "Invalid server number. Please enter a valid number." << endl;
						}
					}
					catch (const std::invalid_argument& e)
					{
						cout << "Invalid input. Please enter a number." << endl;
					}
					catch (const std::out_of_range& e)
					{
						cout << "Invalid input. Please enter a number within the valid range." << endl;
					}
				}
			}
		}
		else if (input == "7")
		{
			while (!boolean2)
			{
				system("cls");

				cout << "Image Model" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					llm_model_image = input2;
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
		else if (input == "8")
		{
			while (!boolean2)
			{
				system("cls");

				cout << "1. /api/generate" << endl;
				cout << "2. /api/chat" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 == "1")
				{
					api_chat = false;
					boolean2 = true;
					_Settings::SaveSettings();
				}
				if (input2 == "2")
				{
					boolean2 == true;
					api_chat = true;
				}
			}
		}
		else if (input == "0")
		{
			_Settings::SaveSettings();
			boolean = true;
		}
		else
		{
			cout << "Invalid Options..." << endl;
		}
	}
}

void _Settings::DrivingSettings()
{
	string input;
	string input2;
	bool boolean = false;
	bool boolean2 = false;

	while (!boolean)
	{
		system("cls");

		cout << endl;
		cout << "Driving Settings" << endl;
		cout << "1. Time To Collision" << endl;
		cout << "2. IoU Threshold Minimum" << endl;
		cout << "3. IoU Threshold Maximum" << endl;
		cout << "-------------------------------------" << endl;
		cout << "0. Main Menu" << endl;
		cout << endl;
		cout << "Driving Settings" << endl;
		cout << "TTC Threshold: " << ttc_threshold << endl;
		cout << "IoU Minimum: " << iou_min << endl;
		cout << "IoU Maximum: " << iou_max << endl;
		cout << endl;
		cout << "Your Selection: ";
		getline(cin, input);

		if (input == "1")
		{
			while (!boolean2)
			{
				system("cls");

				cout << "Time To Collision (TTC) Threshold" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					ttc_threshold = stod(input2);
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
		else if (input == "2")
		{
			while (!boolean2)
			{
				system("cls");

				cout << "IoU Threshold Minimum" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					iou_min = stod(input2);
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
		else if (input == "3")
		{
			while (!boolean2)
			{
				system("cls");

				cout << "IoU Threshold Maximum" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					iou_max = stod(input2);
					boolean2 = true;
					_Settings::SaveSettings();
				}
			}
		}
	}
}

bool _Settings::GetSoundMemoryEnabled()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 's' && input[x + 1] == 'o' && input[x + 2] == 'u' && input[x + 3] == 'n' && input[x + 4] == 'd' && input[x + 5] == '_' && input[x + 6] == 'm' && input[x + 7] == 'e' && input[x + 8] == 'm' && input[x + 9] == 'o' && input[x + 10] == 'r' && input[x + 11] == 'y' && input[x + 12] == '_' && input[x + 13] == 'e' && input[x + 14] == 'n' && input[x + 15] == 'a' && input[x + 16] == 'b' && input[x + 17] == 'l' && input[x + 18] == 'e' && input[x + 19] == 'd')
				{
					for (int y = x + 21; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

string _Settings::GetCUDAAccellerationRemoteHostname()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'u' && input[x + 2] == 'd' && input[x + 3] == 'a' && input[x + 4] == '_' && input[x + 5] == 'a' && input[x + 6] == 'c' && input[x + 7] == 'c' && input[x + 8] == 'e' && input[x + 9] == 'l' && input[x + 10] == 'l' && input[x + 11] == 'e' && input[x + 12] == 'r' && input[x + 13] == 'a' && input[x + 14] == 't' && input[x + 15] == 'i' && input[x + 16] == 'o' && input[x + 17] == 'n' && input[x + 18] == '_' && input[x + 19] == 'r' && input[x + 20] == 'e' && input[x + 21] == 'm' && input[x + 22] == 'o' && input[x + 23] == 't' && input[x + 24] == 'e' && input[x + 25] == '_' && input[x + 26] == 'h' && input[x + 27] == 'o' && input[x + 28] == 's' && input[x + 29] == 't' && input[x + 30] == 'n' && input[x + 31] == 'a' && input[x + 32] == 'm' && input[x + 33] == 'e')
				{
					for (int y = x + 35; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetWorkingMemoryLimit()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'w' && input[x + 1] == 'o' && input[x + 2] == 'r' && input[x + 3] == 'k' && input[x + 4] == 'i' && input[x + 5] == 'n' && input[x + 6] == 'g' && input[x + 7] == '_' && input[x + 8] == 'm' && input[x + 9] == 'e' && input[x + 10] == 'm' && input[x + 11] == 'o' && input[x + 12] == 'r' && input[x + 13] == 'y' && input[x + 14] == '_' && input[x + 15] == 'l' && input[x + 16] == 'i' && input[x + 17] == 'm' && input[x + 18] == 'i' && input[x + 19] == 't')
				{
					for (int y = x + 21; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetShortTermMemoryLimit()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 's' && input[x + 1] == 'h' && input[x + 2] == 'o' && input[x + 3] == 'r' && input[x + 4] == 't' && input[x + 5] == '_' && input[x + 6] == 't' && input[x + 7] == 'e' && input[x + 8] == 'r' && input[x + 9] == 'm' && input[x + 10] == '_' && input[x + 11] == 'm' && input[x + 12] == 'e' && input[x + 13] == 'm' && input[x + 14] == 'o' && input[x + 15] == 'r' && input[x + 16] == 'y' && input[x + 17] == '_' && input[x + 18] == 'l' && input[x + 19] == 'i' && input[x + 20] == 'm' && input[x + 21] == 'i' && input[x + 22] == 't')
				{
					for (int y = x + 24; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

bool _Settings::GetObjectDetectionRemoteEnabled()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'v' && input[x + 1] == 'i' && input[x + 2] == 's' && input[x + 3] == 'i' && input[x + 4] == 'o' && input[x + 5] == 'n' && input[x + 6] == '_' && input[x + 7] == 'o' && input[x + 8] == 'b' && input[x + 9] == 'j' && input[x + 10] == 'e' && input[x + 11] == 'c' && input[x + 12] == 't' && input[x + 13] == '_' && input[x + 14] == 'd' && input[x + 15] == 'e' && input[x + 16] == 't' && input[x + 17] == 'e' && input[x + 18] == 'c' && input[x + 19] == 't' && input[x + 20] == 'i' && input[x + 21] == 'o' && input[x + 22] == 'n' && input[x + 23] == '_' && input[x + 24] == 'r' && input[x + 25] == 'e' && input[x + 26] == 'm' && input[x + 27] == 'o' && input[x + 28] == 't' && input[x + 29] == 'e' && input[x + 30] == '_' && input[x + 31] == 'e' && input[x + 32] == 'n' && input[x + 33] == 'a' && input[x + 34] == 'b' && input[x + 35] == 'l' && input[x + 36] == 'e' && input[x + 37] == 'd')
				{
					for (int y = x + 39; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

string _Settings::GetObjectDetectionRemoteHostname()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'v' && input[x + 1] == 'i' && input[x + 2] == 's' && input[x + 3] == 'i' && input[x + 4] == 'o' && input[x + 5] == 'n' && input[x + 6] == '_' && input[x + 7] == 'o' && input[x + 8] == 'b' && input[x + 9] == 'j' && input[x + 10] == 'e' && input[x + 11] == 'c' && input[x + 12] == 't' && input[x + 13] == '_' && input[x + 14] == 'd' && input[x + 15] == 'e' && input[x + 16] == 't' && input[x + 17] == 'e' && input[x + 18] == 'c' && input[x + 19] == 't' && input[x + 20] == 'i' && input[x + 21] == 'o' && input[x + 22] == 'n' && input[x + 23] == '_' && input[x + 24] == 's' && input[x + 25] == 'e' && input[x + 26] == 'r' && input[x + 27] == 'v' && input[x + 28] == 'e' && input[x + 29] == 'r' && input[x + 30] == '_' && input[x + 31] == 'h' && input[x + 32] == 'o' && input[x + 33] == 's' && input[x + 34] == 't' && input[x + 35] == 'n' && input[x + 36] == 'a' && input[x + 37] == 'm' && input[x + 38] == 'e')
				{
					for (int y = x + 40; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

int _Settings::GetCamera1FPS()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'a' && input[x + 2] == 'm' && input[x + 3] == 'e' && input[x + 4] == 'r' && input[x + 5] == 'a' && input[x + 6] == '1' && input[x + 7] == '_' && input[x + 8] == 'f' && input[x + 9] == 'p' && input[x + 10] == 's')
				{
					for (int y = x + 12; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return stoi(temp);
				}
			}
		}
	}
	return stoi(temp);
}

string _Settings::GetCamera1Resolution()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'a' && input[x + 2] == 'm' && input[x + 3] == 'e' && input[x + 4] == 'r' && input[x + 5] == 'a' && input[x + 6] == '1' && input[x + 7] == '_' && input[x + 8] == 'r' && input[x + 9] == 'e' && input[x + 10] == 's' && input[x + 11] == 'o' && input[x + 12] == 'l' && input[x + 13] == 'u' && input[x + 14] == 't' && input[x + 15] == 'i' && input[x + 16] == 'o' && input[x + 17] == 'n')
				{
					for (int y = x + 19; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

int _Settings::GetCamera2FPS()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'a' && input[x + 2] == 'm' && input[x + 3] == 'e' && input[x + 4] == 'r' && input[x + 5] == 'a' && input[x + 6] == '2' && input[x + 7] == '_' && input[x + 8] == 'f' && input[x + 9] == 'p' && input[x + 10] == 's')
				{
					for (int y = x + 12; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return stoi(temp);
				}
			}
		}
	}
	return stoi(temp);
}

string _Settings::GetCamera2Resolution()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'a' && input[x + 2] == 'm' && input[x + 3] == 'e' && input[x + 4] == 'r' && input[x + 5] == 'a' && input[x + 6] == '2' && input[x + 7] == '_' && input[x + 8] == 'r' && input[x + 9] == 'e' && input[x + 10] == 's' && input[x + 11] == 'o' && input[x + 12] == 'l' && input[x + 13] == 'u' && input[x + 14] == 't' && input[x + 15] == 'i' && input[x + 16] == 'o' && input[x + 17] == 'n')
				{
					for (int y = x + 19; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

bool _Settings::GetComputerUseEnabled()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'p' && input[x + 1] == 'r' && input[x + 2] == 'i' && input[x + 3] == 'v' && input[x + 4] == 'a' && input[x + 5] == 't' && input[x + 6] == 'e' && input[x + 7] == '_' && input[x + 8] == 'c' && input[x + 9] == 'o' && input[x + 10] == 'm' && input[x + 11] == 'p' && input[x + 12] == 'u' && input[x + 13] == 't' && input[x + 14] == 'e' && input[x + 15] == 'r')
				{
					for (int y = x + 17; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

bool _Settings::GetCUDAAccellerationEnable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'u' && input[x + 2] == 'd' && input[x + 3] == 'a' && input[x + 4] == '_' && input[x + 5] == 'a' && input[x + 6] == 'c' && input[x + 7] == 'c' && input[x + 8] == 'e' && input[x + 9] == 'l' && input[x + 10] == 'l' && input[x + 11] == 'e' && input[x + 12] == 'r' && input[x + 13] == 'a' && input[x + 14] == 't' && input[x + 15] == 'i' && input[x + 16] == 'o' && input[x + 17] == 'n')
				{
					for (int y = x + 19; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

bool _Settings::GetCUDAAccellerationRemoteEnable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'u' && input[x + 2] == 'd' && input[x + 3] == 'a' && input[x + 4] == '_' && input[x + 5] == 'a' && input[x + 6] == 'c' && input[x + 7] == 'c' && input[x + 8] == 'e' && input[x + 9] == 'l' && input[x + 10] == 'l' && input[x + 11] == 'e' && input[x + 12] == 'r' && input[x + 13] == 'a' && input[x + 14] == 't' && input[x + 15] == 'i' && input[x + 16] == 'o' && input[x + 17] == 'n' && input[x + 18] == '_' && input[x + 19] == 'r' && input[x + 20] == 'e' && input[x + 21] == 'm' && input[x + 22] == 'o' && input[x + 23] == 't' && input[x + 24] == 'e' && input[x + 25] == '_' && input[x + 26] == 'e' && input[x + 27] == 'n' && input[x + 28] == 'a' && input[x + 29] == 'b' && input[x + 30] == 'l' && input[x + 31] == 'e' && input[x + 32] == 'd')
				{
					for (int y = x + 34; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

string _Settings::GetGPUAccellerationRemoteHostname()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'u' && input[x + 2] == 'd' && input[x + 3] == 'a' && input[x + 4] == '_' && input[x + 5] == 'a' && input[x + 6] == 'c' && input[x + 7] == 'c' && input[x + 8] == 'e' && input[x + 9] == 'l' && input[x + 10] == 'l' && input[x + 11] == 'e' && input[x + 12] == 'r' && input[x + 13] == 'a' && input[x + 14] == 't' && input[x + 15] == 'i' && input[x + 16] == 'o' && input[x + 17] == 'n' && input[x + 18] == '_' && input[x + 19] == 'r' && input[x + 20] == 'e' && input[x + 21] == 'm' && input[x + 22] == 'o' && input[x + 23] == 't' && input[x + 24] == 'e' && input[x + 25] == '_' && input[x + 26] == 'h' && input[x + 27] == 'o' && input[x + 28] == 's' && input[x + 29] == 't' && input[x + 30] == 'n' && input[x + 31] == 'a' && input[x + 32] == 'm' && input[x + 33] == 'e')
				{
					for (int y = x + 35; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

bool _Settings::GetSpeechLieDetectionEnabled()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 's' && input[x + 1] == 'p' && input[x + 2] == 'e' && input[x + 3] == 'e' && input[x + 4] == 'c' && input[x + 5] == 'h' && input[x + 6] == '_' && input[x + 7] == 'l' && input[x + 8] == 'i' && input[x + 9] == 'e' && input[x + 10] == '_' && input[x + 11] == 'd' && input[x + 12] == 'e' && input[x + 13] == 't' && input[x + 14] == 'e' && input[x + 15] == 'c' && input[x + 16] == 't' && input[x + 17] == 'i' && input[x + 18] == 'o' && input[x + 19] == 'n')
				{
					for (int y = x + 21; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

bool _Settings::GetComputerMonitorRecognitionEnable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'o' && input[x + 2] == 'm' && input[x + 3] == 'p' && input[x + 4] == 'u' && input[x + 5] == 't' && input[x + 6] == 'e' && input[x + 7] == 'r' && input[x + 8] == '_' && input[x + 9] == 'm' && input[x + 10] == 'o' && input[x + 11] == 'n' && input[x + 12] == 'i' && input[x + 13] == 't' && input[x + 14] == 'o' && input[x + 15] == 'r' && input[x + 16] == '_' && input[x + 17] == 'r' && input[x + 18] == 'e' && input[x + 19] == 'c' && input[x + 20] == 'o' && input[x + 21] == 'g' && input[x + 22] == 'n' && input[x + 23] == 'i' && input[x + 24] == 't' && input[x + 25] == 'i' && input[x + 26] == 'o' && input[x + 27] == 'n')
				{
					for (int y = x + 29; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

bool _Settings::GetComputerOwnedRecognitionEnabled()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				{
					for (int y = x + 19; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

bool _Settings::GetMicrophone1Enable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'm' && input[x + 1] == 'i' && input[x + 2] == 'c' && input[x + 3] == 'r' && input[x + 4] == 'o' && input[x + 5] == 'p' && input[x + 6] == 'h' && input[x + 7] == 'o' && input[x + 8] == 'n' && input[x + 9] == 'e' && input[x + 10] == '1' && input[x + 11] == '_' && input[x + 12] == 'e' && input[x + 13] == 'n' && input[x + 14] == 'a' && input[x + 15] == 'b' && input[x + 16] == 'l' && input[x + 17] == 'e')
				{
					for (int y = x + 19; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

int _Settings::GetMicrophone1Device()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'm' && input[x + 1] == 'i' && input[x + 2] == 'c' && input[x + 3] == 'r' && input[x + 4] == 'o' && input[x + 5] == 'p' && input[x + 6] == 'h' && input[x + 7] == 'o' && input[x + 8] == 'n' && input[x + 9] == 'e' && input[x + 10] == '1' && input[x + 11] == '_' && input[x + 12] == 'd' && input[x + 13] == 'e' && input[x + 14] == 'v' && input[x + 15] == 'i' && input[x + 16] == 'c' && input[x + 17] == 'e')
				{
					for (int y = x + 19; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return stoi(temp);
				}
			}
		}
	}
	return stoi(temp);
}

bool _Settings::GetMicrophone2Enable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'm' && input[x + 1] == 'i' && input[x + 2] == 'c' && input[x + 3] == 'r' && input[x + 4] == 'o' && input[x + 5] == 'p' && input[x + 6] == 'h' && input[x + 7] == 'o' && input[x + 8] == 'n' && input[x + 9] == 'e' && input[x + 10] == '2' && input[x + 11] == '_' && input[x + 12] == 'e' && input[x + 13] == 'n' && input[x + 14] == 'a' && input[x + 15] == 'b' && input[x + 16] == 'l' && input[x + 17] == 'e')
				{
					for (int y = x + 19; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

int _Settings::GetMicrophone2Device()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'm' && input[x + 1] == 'i' && input[x + 2] == 'c' && input[x + 3] == 'r' && input[x + 4] == 'o' && input[x + 5] == 'p' && input[x + 6] == 'h' && input[x + 7] == 'o' && input[x + 8] == 'n' && input[x + 9] == 'e' && input[x + 10] == '2' && input[x + 11] == '_' && input[x + 12] == 'd' && input[x + 13] == 'e' && input[x + 14] == 'v' && input[x + 15] == 'i' && input[x + 16] == 'c' && input[x + 17] == 'e')
				{
					for (int y = x + 19; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return stoi(temp);
				}
			}
		}
	}
	return stoi(temp);
}

bool _Settings::GetCUDAAcellerationEnable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'u' && input[x + 2] == 'd' && input[x + 3] == 'a' && input[x + 4] == '_' && input[x + 5] == 'a' && input[x + 6] == 'c' && input[x + 7] == 'c' && input[x + 8] == 'e' && input[x + 9] == 'l' && input[x + 10] == 'l' && input[x + 11] == 'e' && input[x + 12] == 'r' && input[x + 13] == 'a' && input[x + 14] == 't' && input[x + 15] == 'i' && input[x + 16] == 'o' && input[x + 17] == 'n')
				{
					for (int y = x + 19; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

string _Settings::GetCUDAAccelerationRemoteHostname()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'u' && input[x + 2] == 'd' && input[x + 3] == 'a' && input[x + 4] == '_' && input[x + 5] == 'a' && input[x + 6] == 'c' && input[x + 7] == 'c' && input[x + 8] == 'e' && input[x + 9] == 'l' && input[x + 10] == 'l' && input[x + 11] == 'e' && input[x + 12] == 'r' && input[x + 13] == 'a' && input[x + 14] == 't' && input[x + 15] == 'i' && input[x + 16] == 'o' && input[x + 17] == 'n' && input[x + 18] == '_' && input[x + 19] == 'r' && input[x + 20] == 'e' && input[x + 21] == 'm' && input[x + 22] == 'o' && input[x + 23] == 't' && input[x + 24] == 'e' && input[x + 25] == '_' && input[x + 26] == 'h' && input[x + 27] == 'o' && input[x + 28] == 's' && input[x + 29] == 't' && input[x + 30] == 'n' && input[x + 31] == 'a' && input[x + 32] == 'm' && input[x + 33] == 'e')
				{
					for (int y = x + 35; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

bool _Settings::GetLongTermMemoryEnabled()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'l' && input[x + 1] == 'o' && input[x + 2] == 'n' && input[x + 3] == 'g' && input[x + 4] == '_' && input[x + 5] == 't' && input[x + 6] == 'e' && input[x + 7] == 'r' && input[x + 8] == 'm' && input[x + 9] == '_' && input[x + 10] == 'm' && input[x + 11] == 'e' && input[x + 12] == 'm' && input[x + 13] == 'o' && input[x + 14] == 'r' && input[x + 15] == 'y' && input[x + 16] == '_' && input[x + 17] == 'e' && input[x + 18] == 'n' && input[x + 19] == 'a' && input[x + 20] == 'b' && input[x + 21] == 'l' && input[x + 22] == 'e' && input[x + 23] == 'd')
				{
					for (int y = x + 25; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

string _Settings::GetLongTermMemoryLimit()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'l' && input[x + 1] == 'o' && input[x + 2] == 'n' && input[x + 3] == 'g' && input[x + 4] == '_' && input[x + 5] == 't' && input[x + 6] == 'e' && input[x + 7] == 'r' && input[x + 8] == 'm' && input[x + 9] == '_' && input[x + 10] == 'm' && input[x + 11] == 'e' && input[x + 12] == 'm' && input[x + 13] == 'o' && input[x + 14] == 'r' && input[x + 15] == 'y' && input[x + 16] == '_' && input[x + 17] == 'l' && input[x + 18] == 'i' && input[x + 19] == 'm' && input[x + 20] == 'i' && input[x + 21] == 't')
				{
					for (int y = x + 23; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

bool _Settings::GetReadingEnable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'r' && input[x + 1] == 'e' && input[x + 2] == 'a' && input[x + 3] == 'd' && input[x + 4] == 'i' && input[x + 5] == 'n' && input[x + 6] == 'g')
				{
					for (int y = x + 8; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

string _Settings::GetFFMpegLocation()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'f' && input[x + 1] == 'f' && input[x + 2] == 'm' && input[x + 3] == 'p' && input[x + 4] == 'e' && input[x + 5] == 'g' && input[x + 6] == '_' && input[x + 7] == 'l' && input[x + 8] == 'o' && input[x + 9] == 'c' && input[x + 10] == 'a' && input[x + 11] == 't' && input[x + 12] == 'i' && input[x + 13] == 'o' && input[x + 14] == 'n')
				{
					for (int y = x + 16; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetCUDAAccellerationRemoteCores()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'u' && input[x + 2] == 'd' && input[x + 3] == 'a' && input[x + 4] == '_' && input[x + 5] == 'a' && input[x + 6] == 'c' && input[x + 7] == 'c' && input[x + 8] == 'e' && input[x + 9] == 'l' && input[x + 10] == 'l' && input[x + 11] == 'e' && input[x + 12] == 'r' && input[x + 13] == 'a' && input[x + 14] == 't' && input[x + 15] == 'i' && input[x + 16] == 'o' && input[x + 17] == 'n' && input[x + 18] == '_' && input[x + 19] == 'r' && input[x + 20] == 'e' && input[x + 21] == 'm' && input[x + 22] == 'o' && input[x + 23] == 't' && input[x + 24] == 'e' && input[x + 25] == '_' && input[x + 26] == 'c' && input[x + 27] == 'o' && input[x + 28] == 'r' && input[x + 29] == 'e' && input[x + 30] == 's')
				{
					for (int y = x + 32; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetTenorAccellerationRemoteHostname()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'u' && input[x + 2] == 'd' && input[x + 3] == 'a' && input[x + 4] == '_' && input[x + 5] == 'a' && input[x + 6] == 'c' && input[x + 7] == 'c' && input[x + 8] == 'e' && input[x + 9] == 'l' && input[x + 10] == 'l' && input[x + 11] == 'e' && input[x + 12] == 'r' && input[x + 13] == 'a' && input[x + 14] == 't' && input[x + 15] == 'i' && input[x + 16] == 'o' && input[x + 17] == 'n' && input[x + 18] == '_' && input[x + 19] == 'r' && input[x + 20] == 'e' && input[x + 21] == 'm' && input[x + 22] == 'o' && input[x + 23] == 't' && input[x + 24] == 'e' && input[x + 25] == '_' && input[x + 26] == 'h' && input[x + 27] == 'o' && input[x + 28] == 's' && input[x + 29] == 't' && input[x + 30] == 'n' && input[x + 31] == 'a' && input[x + 32] == 'm' && input[x + 33] == 'e')
				{
					for (int y = x + 35; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

bool _Settings::GetComputerMonitorRecognitionEnabled()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'o' && input[x + 2] == 'm' && input[x + 3] == 'p' && input[x + 4] == 'u' && input[x + 5] == 't' && input[x + 6] == 'e' && input[x + 7] == 'r' && input[x + 8] == '_' && input[x + 9] == 'm' && input[x + 10] == 'o' && input[x + 11] == 'n' && input[x + 12] == 'i' && input[x + 13] == 't' && input[x + 14] == 'o' && input[x + 15] == 'r' && input[x + 16] == '_' && input[x + 17] == 'r' && input[x + 18] == 'e' && input[x + 19] == 'c' && input[x + 20] == 'o' && input[x + 21] == 'g' && input[x + 22] == 'n' && input[x + 23] == 'i' && input[x + 24] == 't' && input[x + 25] == 'i' && input[x + 26] == 'o' && input[x + 27] == 'n')
				{
					for (int y = x + 29; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

bool _Settings::GetTensorAccelleration()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 't' && input[x + 1] == 'e' && input[x + 2] == 'n' && input[x + 3] == 's' && input[x + 4] == 'o' && input[x + 5] == 'r' && input[x + 6] == '_' && input[x + 7] == 'a' && input[x + 8] == 'c' && input[x + 9] == 'c' && input[x + 10] == 'e' && input[x + 11] == 'l' && input[x + 12] == 'l' && input[x + 13] == 'e' && input[x + 14] == 'r' && input[x + 15] == 'a' && input[x + 16] == 't' && input[x + 17] == 'i' && input[x + 18] == 'o' && input[x + 19] == 'n')
				{
					for (int y = x + 21; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

bool _Settings::GetTensorAccellerationRemoteEnabled()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 't' && input[x + 1] == 'e' && input[x + 2] == 'n' && input[x + 3] == 's' && input[x + 4] == 'o' && input[x + 5] == 'r' && input[x + 6] == '_' && input[x + 7] == 'a' && input[x + 8] == 'c' && input[x + 9] == 'c' && input[x + 10] == 'e' && input[x + 11] == 'l' && input[x + 12] == 'l' && input[x + 13] == 'e' && input[x + 14] == 'r' && input[x + 15] == 'a' && input[x + 16] == 't' && input[x + 17] == 'i' && input[x + 18] == 'o' && input[x + 19] == 'n' && input[x + 20] == '_' && input[x + 21] == 'r' && input[x + 22] == 'e' && input[x + 23] == 'm' && input[x + 24] == 'o' && input[x + 25] == 't' && input[x + 26] == 'e' && input[x + 27] == '_' && input[x + 28] == 'e' && input[x + 29] == 'n' && input[x + 30] == 'a' && input[x + 31] == 'b' && input[x + 32] == 'l' && input[x + 33] == 'e' && input[x + 34] == 'd')
				{
					for (int y = x + 36; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

string _Settings::GetTensorAccellerationRemoteHostname()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 't' && input[x + 1] == 'e' && input[x + 2] == 'n' && input[x + 3] == 's' && input[x + 4] == 'o' && input[x + 5] == 'r' && input[x + 6] == '_' && input[x + 7] == 'a' && input[x + 8] == 'c' && input[x + 9] == 'c' && input[x + 10] == 'e' && input[x + 11] == 'l' && input[x + 12] == 'l' && input[x + 13] == 'e' && input[x + 14] == 'r' && input[x + 15] == 'a' && input[x + 16] == 't' && input[x + 17] == 'i' && input[x + 18] == 'o' && input[x + 19] == 'n' && input[x + 20] == '_' && input[x + 21] == 'r' && input[x + 22] == 'e' && input[x + 23] == 'm' && input[x + 24] == 'o' && input[x + 25] == 't' && input[x + 26] == 'e' && input[x + 27] == '_' && input[x + 28] == 'h' && input[x + 29] == 'o' && input[x + 30] == 's' && input[x + 31] == 't' && input[x + 32] == 'n' && input[x + 33] == 'a' && input[x + 34] == 'm' && input[x + 35] == 'e')
				{
					for (int y = x + 37; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetTensorAccellerationRemoteCores()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 't' && input[x + 1] == 'e' && input[x + 2] == 'n' && input[x + 3] == 's' && input[x + 4] == 'o' && input[x + 5] == 'r' && input[x + 6] == '_' && input[x + 7] == 'a' && input[x + 8] == 'c' && input[x + 9] == 'c' && input[x + 10] == 'e' && input[x + 11] == 'l' && input[x + 12] == 'l' && input[x + 13] == 'e' && input[x + 14] == 'r' && input[x + 15] == 'a' && input[x + 16] == 't' && input[x + 17] == 'i' && input[x + 18] == 'o' && input[x + 19] == 'n' && input[x + 20] == '_' && input[x + 21] == 'r' && input[x + 22] == 'e' && input[x + 23] == 'm' && input[x + 24] == 'o' && input[x + 25] == 't' && input[x + 26] == 'e' && input[x + 27] == '_' && input[x + 28] == 'c' && input[x + 29] == 'o' && input[x + 30] == 'r' && input[x + 31] == 'e' && input[x + 32] == 's')
				{
					for (int y = x + 34; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

bool _Settings::GetWorkingMemoryEnabled()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'w' && input[x + 1] == 'o' && input[x + 2] == 'r' && input[x + 3] == 'k' && input[x + 4] == 'i' && input[x + 5] == 'n' && input[x + 6] == 'g' && input[x + 7] == '_' && input[x + 8] == 'm' && input[x + 9] == 'e' && input[x + 10] == 'm' && input[x + 11] == 'o' && input[x + 12] == 'r' && input[x + 13] == 'y' && input[x + 14] == '_' && input[x + 15] == 'e' && input[x + 16] == 'n' && input[x + 17] == 'a' && input[x + 18] == 'b' && input[x + 19] == 'l' && input[x + 20] == 'e' && input[x + 21] == 'd')
				{
					for (int y = x + 23; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

bool _Settings::GetSpeechMemoryEnabled()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 's' && input[x + 1] == 'p' && input[x + 2] == 'e' && input[x + 3] == 'e' && input[x + 4] == 'c' && input[x + 5] == 'h' && input[x + 6] == '_' && input[x + 7] == 'm' && input[x + 8] == 'e' && input[x + 9] == 'm' && input[x + 10] == 'o' && input[x + 11] == 'r' && input[x + 12] == 'y' && input[x + 13] == '_' && input[x + 14] == 'e' && input[x + 15] == 'n' && input[x + 16] == 'a' && input[x + 17] == 'b' && input[x + 18] == 'l' && input[x + 19] == 'e' && input[x + 20] == 'd')
				{
					for (int y = x + 22; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

//int _Settings::GetMemoryLimit()
//{
//	MYSQL* conn;
//	MYSQL_ROW row;
//	MYSQL_RES* result;
//	string sql1;
//	string mysql_database = "ai_settings";
//	string mysql_username = _Settings::GetMySQLUsername();
//	string mysql_password = _Settings::GetMySQLPassword();
//	string setting;
//	string value;
//	
//	string temp;
//
//	conn = mysql_init(0);
//	conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//	sql1 = "SELECT * FROM settings;";
//	mysql_query(conn, sql1.c_str());
//	result = mysql_store_result(conn);
//
//	if (conn)
//	{
//		while (row = mysql_fetch_row(result))
//		{
//			setting = row[0];
//			value = row[1];
//			value_int = stoi(value.c_str());
//
//			if (setting == "mysql_hostname")
//			{
//				mysql_close(conn);
//				return value_int;
//			}
//		}
//	}
//	mysql_close(conn);
//}

bool _Settings::GetSmartphoneRecognitionEnable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				{
					for (int y = x + 19; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

bool _Settings::GetWorkingMemoryEnable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				{
					for (int y = x + 19; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

bool _Settings::GetShortTermMemoryEnabled()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 's' && input[x + 1] == 'h' && input[x + 2] == 'o' && input[x + 3] == 'r' && input[x + 4] == 't' && input[x + 5] == '_' && input[x + 6] == 't' && input[x + 7] == 'e' && input[x + 8] == 'r' && input[x + 9] == 'm' && input[x + 10] == '_' && input[x + 11] == 'm' && input[x + 12] == 'e' && input[x + 13] == 'm' && input[x + 14] == 'o' && input[x + 15] == 'r' && input[x + 16] == 'y' && input[x + 17] == '_' && input[x + 18] == 'e' && input[x + 19] == 'n' && input[x + 20] == 'a' && input[x + 21] == 'b' && input[x + 22] == 'l' && input[x + 23] == 'e' && input[x + 24] == 'd')
				{
					for (int y = x + 26; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

bool _Settings::GetEthicsCheckEnabled()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'e' && input[x + 1] == 't' && input[x + 2] == 'h' && input[x + 3] == 'i' && input[x + 4] == 'c' && input[x + 5] == 's' && input[x + 6] == '_' && input[x + 7] == 'c' && input[x + 8] == 'h' && input[x + 9] == 'e' && input[x + 10] == 'c' && input[x + 11] == 'k' && input[x + 12] == '_' && input[x + 13] == 'e' && input[x + 14] == 'n' && input[x + 15] == 'a' && input[x + 16] == 'b' && input[x + 17] == 'l' && input[x + 18] == 'e' && input[x + 19] == 'd')
				{
					for (int y = x + 21; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

string _Settings::GetTensorRemoteCores()
{
	string temp;
	return temp;
}

bool _Settings::GetObjectDetectionCUDAEnabled()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'v' && input[x + 1] == 'i' && input[x + 2] == 's' && input[x + 3] == 'i' && input[x + 4] == 'o' && input[x + 5] == 'n' && input[x + 6] == '_' && input[x + 7] == 'o' && input[x + 8] == 'b' && input[x + 9] == 'j' && input[x + 10] == 'e' && input[x + 11] == 'c' && input[x + 12] == 't' && input[x + 13] == '_' && input[x + 14] == 'd' && input[x + 15] == 'e' && input[x + 16] == 't' && input[x + 17] == 'e' && input[x + 18] == 'c' && input[x + 19] == 't' && input[x + 20] == 'i' && input[x + 21] == 'o' && input[x + 22] == 'n' && input[x + 23] == '_' && input[x + 24] == 'c' && input[x + 25] == 'u' && input[x + 26] == 'd' && input[x + 27] == 'a')
				{
					for (int y = x + 29; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

string _Settings::GetSoundCodec()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 's' && input[x + 1] == 'o' && input[x + 2] == 'u' && input[x + 3] == 'n' && input[x + 4] == 'd' && input[x + 5] == '_' && input[x + 6] == 'c' && input[x + 7] == 'o' && input[x + 8] == 'd' && input[x + 9] == 'e' && input[x + 10] == 'c')
				{
					for (int y = x + 12; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetSoundBitrate()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 's' && input[x + 1] == 'o' && input[x + 2] == 'u' && input[x + 3] == 'n' && input[x + 4] == 'd' && input[x + 5] == '_' && input[x + 6] == 'b' && input[x + 7] == 'i' && input[x + 8] == 't' && input[x + 9] == 'r' && input[x + 10] == 'a' && input[x + 11] == 't' && input[x + 12] == 'e')
				{
					for (int y = x + 14; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetMySQLVisionDatabase()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'm' && input[x + 1] == 'y' && input[x + 2] == 's' && input[x + 3] == 'q' && input[x + 4] == 'l' && input[x + 5] == '_' && input[x + 6] == 'v' && input[x + 7] == 'i' && input[x + 8] == 's' && input[x + 9] == 'i' && input[x + 10] == 'o' && input[x + 11] == 'n' && input[x + 12] == '_' && input[x + 13] == 'd' && input[x + 14] == 'a' && input[x + 15] == 't' && input[x + 16] == 'a' && input[x + 17] == 'b' && input[x + 18] == 'a' && input[x + 19] == 's' && input[x + 20] == 'e')
				{
					for (int y = x + 22; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetMySQLSoundDatabase()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'm' && input[x + 1] == 'y' && input[x + 2] == 's' && input[x + 3] == 'q' && input[x + 4] == 'l' && input[x + 5] == '_' && input[x + 6] == 's' && input[x + 7] == 'o' && input[x + 8] == 'u' && input[x + 9] == 'n' && input[x + 10] == 'd' && input[x + 11] == '_' && input[x + 12] == 'd' && input[x + 13] == 'a' && input[x + 14] == 't' && input[x + 15] == 'a' && input[x + 16] == 'b' && input[x + 17] == 'a' && input[x + 18] == 's' && input[x + 19] == 'e')
				{
					for (int y = x + 21; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetMySQLSpeechDatabase()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'm' && input[x + 1] == 'y' && input[x + 2] == 's' && input[x + 3] == 'q' && input[x + 4] == 'l' && input[x + 5] == '_' && input[x + 6] == 's' && input[x + 7] == 'p' && input[x + 8] == 'e' && input[x + 9] == 'e' && input[x + 10] == 'c' && input[x + 11] == 'h' && input[x + 12] == '_' && input[x + 13] == 'd' && input[x + 14] == 'a' && input[x + 15] == 't' && input[x + 16] == 'a' && input[x + 17] == 'b' && input[x + 18] == 'a' && input[x + 19] == 's' && input[x + 20] == 'e')
				{
					for (int y = x + 22; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetMySQLWorkingMemoryDatabase()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'm' && input[x + 1] == 'y' && input[x + 2] == 's' && input[x + 3] == 'q' && input[x + 4] == 'l' && input[x + 5] == '_' && input[x + 6] == 'w' && input[x + 7] == 'o' && input[x + 8] == 'r' && input[x + 9] == 'k' && input[x + 10] == 'i' && input[x + 11] == 'n' && input[x + 12] == 'g' && input[x + 13] == '_' && input[x + 14] == 'm' && input[x + 15] == 'e' && input[x + 16] == 'm' && input[x + 17] == 'o' && input[x + 18] == 'r' && input[x + 19] == 'y' && input[x + 20] == '_' && input[x + 21] == 'd' && input[x + 22] == 'a' && input[x + 23] == 't' && input[x + 24] == 'a' && input[x + 25] == 'b' && input[x + 26] == 'a' && input[x + 27] == 's' && input[x + 28] == 'e')
				{
					for (int y = x + 30; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetMySQLShortTermMemoryDatabase()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'm' && input[x + 1] == 'y' && input[x + 2] == 's' && input[x + 3] == 'q' && input[x + 4] == 'l' && input[x + 5] == '_' && input[x + 6] == 's' && input[x + 7] == 'h' && input[x + 8] == 'o' && input[x + 9] == 'r' && input[x + 10] == 't' && input[x + 11] == '_' && input[x + 12] == 't' && input[x + 13] == 'e' && input[x + 14] == 'r' && input[x + 15] == 'm' && input[x + 16] == '_' && input[x + 17] == 'm' && input[x + 18] == 'e' && input[x + 19] == 'm' && input[x + 20] == 'o' && input[x + 21] == 'r' && input[x + 22] == 'y' && input[x + 23] == '_' && input[x + 24] == 'd' && input[x + 25] == 'a' && input[x + 26] == 't' && input[x + 27] == 'a' && input[x + 28] == 'b' && input[x + 29] == 'a' && input[x + 30] == 's' && input[x + 31] == 'e')
				{
					for (int y = x + 33; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetMySQLLongTermMemoryDatabase()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'm' && input[x + 1] == 'y' && input[x + 2] == 's' && input[x + 3] == 'q' && input[x + 4] == 'l' && input[x + 5] == '_' && input[x + 6] == 'l' && input[x + 7] == 'o' && input[x + 8] == 'n' && input[x + 9] == 'g' && input[x + 10] == '_' && input[x + 11] == 't' && input[x + 12] == 'e' && input[x + 13] == 'r' && input[x + 14] == 'm' && input[x + 15] == '_' && input[x + 16] == 'm' && input[x + 17] == 'e' && input[x + 18] == 'm' && input[x + 19] == 'o' && input[x + 20] == 'r' && input[x + 21] == 'y' && input[x + 22] == '_' && input[x + 23] == 'd' && input[x + 24] == 'a' && input[x + 25] == 't' && input[x + 26] == 'a' && input[x + 27] == 'b' && input[x + 28] == 'a' && input[x + 29] == 's' && input[x + 30] == 'e')
				{
					for (int y = x + 32; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

bool _Settings::GetPrivateComputer()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'p' && input[x + 1] == 'r' && input[x + 2] == 'i' && input[x + 3] == 'v' && input[x + 4] == 'a' && input[x + 5] == 't' && input[x + 6] == 'e' && input[x + 7] == '_' && input[x + 8] == 'c' && input[x + 9] == 'o' && input[x + 10] == 'm' && input[x + 11] == 'p' && input[x + 12] == 'u' && input[x + 13] == 't' && input[x + 14] == 'e' && input[x + 15] == 'r')
				{
					for (int y = x + 17; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

string _Settings::GetComputerHostname()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'o' && input[x + 2] == 'm' && input[x + 3] == 'p' && input[x + 4] == 'u' && input[x + 5] == 't' && input[x + 6] == 'e' && input[x + 7] == 'r' && input[x + 8] == '_' && input[x + 9] == 'h' && input[x + 10] == 'o' && input[x + 11] == 's' && input[x + 12] == 't' && input[x + 13] == 'n' && input[x + 14] == 'a' && input[x + 15] == 'm' && input[x + 16] == 'e')
				{
					for (int y = x + 18; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetComputerUsername()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'o' && input[x + 2] == 'm' && input[x + 3] == 'p' && input[x + 4] == 'u' && input[x + 5] == 't' && input[x + 6] == 'e' && input[x + 7] == 'r' && input[x + 8] == '_' && input[x + 9] == 'u' && input[x + 10] == 's' && input[x + 11] == 'e' && input[x + 12] == 'r' && input[x + 13] == 'n' && input[x + 14] == 'a' && input[x + 15] == 'm' && input[x + 16] == 'e')
				{
					for (int y = x + 18; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

string _Settings::GetComputerPassword()
{
	fstream mysql_hostname;
	string input;
	string temp;
	mysql_hostname.open("./settings.txt", ios::in);

	if (mysql_hostname.is_open())
	{
		while (getline(mysql_hostname, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'c' && input[x + 1] == 'o' && input[x + 2] == 'm' && input[x + 3] == 'p' && input[x + 4] == 'u' && input[x + 5] == 't' && input[x + 6] == 'e' && input[x + 7] == 'r' && input[x + 8] == '_' && input[x + 9] == 'p' && input[x + 10] == 'a' && input[x + 11] == 's' && input[x + 12] == 's' && input[x + 13] == 'w' && input[x + 14] == 'o' && input[x + 15] == 'r' && input[x + 16] == 'd')
				{
					for (int y = x + 16; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					return temp;
				}
			}
		}
	}
	return temp;
}

bool _Settings::GetNewsWatchingEnable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'n' && input[x + 1] == 'e' && input[x + 2] == 'w' && input[x + 3] == 's' && input[x + 4] == '_' && input[x + 5] == 'w' && input[x + 6] == 'a' && input[x + 7] == 't' && input[x + 8] == 'c' && input[x + 9] == 'h' && input[x + 10] == 'i' && input[x + 11] == 'n' && input[x + 12] == 'g')
				{
					for (int y = x + 14; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

bool _Settings::GetActionWatchingEnable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'a' && input[x + 1] == 'c' && input[x + 2] == 't' && input[x + 3] == 'i' && input[x + 4] == 'o' && input[x + 5] == 'n' && input[x + 6] == 's' && input[x + 7] == '_' && input[x + 8] == 'w' && input[x + 9] == 'a' && input[x + 10] == 't' && input[x + 11] == 'c' && input[x + 12] == 'h' && input[x + 13] == 'i' && input[x + 14] == 'n' && input[x + 15] == 'g')
				{
					for (int y = x + 17; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

bool _Settings::GetNeedsWatchingEnable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'n' && input[x + 1] == 'e' && input[x + 2] == 'e' && input[x + 3] == 'd' && input[x + 4] == 's' && input[x + 5] == '_' && input[x + 6] == 'd' && input[x + 7] == 'e' && input[x + 8] == 't' && input[x + 9] == 'e' && input[x + 10] == 'c' && input[x + 11] == 't' && input[x + 12] == 'i' && input[x + 13] == 'o' && input[x + 14] == 'n')
				{
					for (int y = x + 16; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

bool _Settings::GetNavigationDetectionEnable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				if (input[x] == 'n' && input[x + 1] == 'a' && input[x + 2] == 'v' && input[x + 3] == 'i' && input[x + 4] == 'g' && input[x + 5] == 'a' && input[x + 6] == 't' && input[x + 7] == 'i' && input[x + 8] == 'o' && input[x + 9] == 'n' && input[x + 10] == '_' && input[x + 11] == 'd' && input[x + 12] == 'e' && input[x + 13] == 't' && input[x + 14] == 'e' && input[x + 15] == 'c' && input[x + 16] == 't' && input[x + 17] == 'i' && input[x + 18] == 'o' && input[x + 19] == 'n')
				{
					for (int y = x + 21; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

bool _Settings::GetSocialNeedsDetectionEnable()
{
	fstream settings;
	string input;
	string temp;
	settings.open("./settings.txt", ios::in);

	if (settings.is_open())
	{
		while (getline(settings, input))
		{
			for (int x = 0; x <= input.length(); x++)
			{
				{
					for (int y = x + 19; y <= input.length(); y++)
					{
						if (input[y] != '\"')
						{
							temp += input[y];
						}
					}
					if (temp == "true" || temp == "True")
						return true;
					else
						return false;
				}
			}
		}
	}
	return false;
}

//bool _Settings::GetNeedsDetectionEnabled()
//{
//	string mysql_username = _Settings::GetMySQLUsername();
//	string mysql_password = _Settings::GetMySQLPassword();
//	return false;
//}

void _Settings::SaveSettingsFile()
{
	fstream settings;

	settings.open("./settings.txt", ios::out | ios::trunc);

	if (settings.is_open())
	{
		// Settings
		if (terms_conditions)
			settings << "terms_conditions=True" << endl;
		else
			settings << "terms_conditions=False" << endl;
		if (working_memory_enabled)
			settings << "working_memory_enabled=True" << endl;
		else
			settings << "working_memory_enabled=False" << endl;
		settings << "working_memory_limit=" << working_memory_limit << endl;
		if (short_term_memory_enabled)
			settings << "short_term_memory_enabled=True" << endl;
		else
			settings << "short_term_memory_enabled=False" << endl;
		if (long_term_memory_enabled)
			settings << "long_term_memory_enabled=True" << endl;
		else
			settings << "long_term_memory_enabled=False" << endl;
		settings << "long_term_memory_limit=" << long_term_memory_limit << endl;
		if (sound_memory)
			settings << "sound_memory=True" << endl;
		else
			settings << "sound_memory=False" << endl;
		if (speech_memory_enabled)
			settings << "speech_memory_enabled=True" << endl;
		else
			settings << "speech_memory_enabled=False" << endl;
		if (speech_recognition)
			settings << "speech_recognition=True" << endl;
		else
			settings << "speech_recognition=False" << endl;
		if (speech_lie_detection)
			settings << "speech_lie_detection=True" << endl;
		else
			settings << "speech_lie_detection=False" << endl;
		settings << "sound_directory=" << sound_directory << endl;
		settings << "sound_codec=" << sound_codec << endl;
		settings << "sound_bitrate=" << sound_bitrate << endl;
		settings << "speech_directory=" << speech_directory << endl;
		if (ethics_check_enabled)
			settings << "ethics_check_enabled=True" << endl;
		else
			settings << "ethics_check_enabled=False" << endl;
		if (cuda_accelleration)
			settings << "cuda_accelleration=True" << endl;
		else
			settings << "cuda_accelleration=False" << endl;
		if (cuda_accelleration_remote_enabled)
			settings << "cuda_accelleration_remote_enabled=True" << endl;
		else
			settings << "cuda_accelleration_remote_enabled=False" << endl;
		settings << "cuda_accelleration_remote_hostname=" << cuda_accelleration_remote_hostname << endl;
		settings << "cuda_accelleration_remote_cores=" << cuda_accelleration_remote_cores << endl;
		if (tensor_accelleration)
			settings << "tensor_accelleration=True" << endl;
		else
			settings << "tensor_accelleration=True" << endl;
		if (tensor_accelleration_remote_enabled)
			settings << "tensor_accelleration_remote_enabled=True" << endl;
		else
			settings << "tensor_accelleration_remote_enabled=False" << endl;
		settings << "tensor_accelleration_remote_hostname=" << tensor_accelleration_remote_hostname << endl;
		settings << "tensor_accelleration_remote_cores=" << tensor_accelleration_remote_cores << endl;
		if (vision_object_detection)
			settings << "vision_object_detection=True" << endl;
		else
			settings << "vision_object_detection=False" << endl;
		if (vision_object_detection_cuda)
			settings << "vision_object_detection_cuda=True" << endl;
		else
			settings << "vision_object_detection_cuda=False" << endl;
		if (vision_object_detection_remote_enabled)
			settings << "vision_object_detection_remote_enabled=True" << endl;
		else
			settings << "vision_object_detection_remote_enabled=False" << endl;
		settings << "vision_object_detection_server_hostname=" << vision_object_detection_server_hostname << endl;
		if (visual_analysis)
		settings << "visual_analysis=True" << endl;
		else
		settings << "visual_analysis=False" << endl;
		if (vision_memory)
		settings << "vision_memory=True" << endl;
		else
		settings << "vision_memory=False" << endl;
		settings << "vision_memory_directory=" << vision_memory_directory << endl;
		if (camera1_enabled)
		settings << "camera1_enabled=True" << endl;
		else
		settings << "camera1_enabled=False" << endl;
		settings << "camera1=" << camera1 << endl;
		settings << "camera1_fps=" << camera1_fps << endl;
		settings << "camera1_resolution=" << camera1_resolution << endl;
		if (camera2_enabled)
			settings << "camera2_enabled=True" << endl;
		else
			settings << "camera2_enabled=False" << endl;
		settings << "camera2=" << camera2 << endl;
		settings << "camera2_fps=" << camera2_fps << endl;
		settings << "camera2_resolution=" << camera2_resolution << endl;
		if (computer_use)
			settings << "computer_use=True" << endl;
		else
			settings << "computer_use=False" << endl;
		if (computer_monitor_recognition)
			settings << "computer_monitor_recognition=True" << endl;
		else
			settings << "computer_monitor_recognition=False" << endl;
		if (computer_owned_recognition)
			settings << "computer_owned_recognition=True" << endl;
		else
			settings << "computer_owned_recognition=False" << endl;
		if (reading)
			settings << "reading=True" << endl;
		else
			settings << "reading=False" << endl;
		//if (reading_fallacy_check)
		//	settings << "reading_fallacy_check=True" << endl;
		//else
		//	settings << "reading_fallacy_check=False" << endl;
		settings << "ffmpeg_location=" << ffmpeg_location << endl;
		if (microphone1_enabled)
			settings << "microphone1_enabled=True" << endl;
		else
			settings << "microphone1_enabled=False" << endl;
		settings << "microphone1_device=" << microphone1_device_name << endl;
		if (microphone2_enabled)
			settings << "microphone2_enable=True" << endl;
		else
			settings << "microphone2_enable=False" << endl;
		settings << "microphone2_device=" << microphone2_device_name << endl;
		if (news_watching)
			settings << "news_watching=True" << endl;
		else
			settings << "news_watching=False" << endl;
		if (action_commands)
			settings << "action_commands=True" << endl;
		else
			settings << "action_commands=False" << endl;
		if (needs_detection)
			settings << "needs_detection=True" << endl;
		else
			settings << "needs_detection=False" << endl;
		if (navigation_detection)
			settings << "navigation_detection=True" << endl;
		else
			settings << "navigation_detection=False" << endl;
		if (social_needs_detection)
			settings << "social_needs_detection_enable=True" << endl;
		else
			settings << "social_needs_detection_enable=False" << endl;

		// MySQL
		settings << "mysql_hostname=" << mysql_hostname << endl;
		settings << "mysql_username=" << mysql_username << endl;
		settings << "mysql_password=" << mysql_password << endl;
		settings << "mysql_vision_database=" << mysql_vision_database << endl;
		settings << "mysql_sound_database=" << mysql_sound_database << endl;
		//settings << "mysql_speech_database=" << mysql_speech_database << endl;
		settings << "mysql_short_term_memory_database=" << mysql_short_term_memory_database << endl;
		settings << "mysql_long_term_memory_database=" << mysql_long_term_memory_database << endl;

		// Computer Settings
		if (private_computer)
			settings << "private_computer=True" << endl;
		else
			settings << "private_computer=False" << endl;
		settings << "computer_hostname=" << computer_hostname << endl;
		settings << "computer_username=" << computer_username << endl;
		settings << "computer_password=" << computer_password << endl;

		// FTP Settings
		if (ftp_enabled)
			settings << "ftp_enabled=True" << endl;
		else
			settings << "ftp_enabled=False" << endl;
		settings << "ftp_hostname=" << ftp_hostname << endl;
		settings << "ftp_username=" << ftp_username << endl;
		settings << "ftp_password=" << ftp_password << endl;
		settings << "ftp_vision_directory=" << ftp_vision_directory << endl;
		settings << "ftp_sound_directory=" << ftp_sound_directory << endl;
		settings << "ftp_vision_storage_limit=" << ftp_vision_storage_limit << endl;
		settings << "ftp_sound_storage_limit=" << ftp_sound_storage_limit << endl;
	}
}

void _Settings::SaveSettings()
{
	MYSQL* conn3;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_hostname = _Settings::GetMySQLHostname();
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string normal_settings_array[] = { "terms_conditions", "cuda_accelleration", "cuda_accelleration_remote_enabled", "cuda_accelleration_remote_hostname", "cuda_accelleration_remote_cores", "tensor_accelleration", "tensor_accelleration_remote_enabled", "tensor_accelleration_remote_hostname", "tensor_accelleration_remote_cores", "working_memory_enabled", "working_memory_limit", "short_term_memory_enabled", "short_term_memory_limit", "long_term_memory_enabled", "long_term_memory_limit", "speech_memory_enabled", "vision_object_detection", "vision_object_detection_cuda", "vision_object_detection_server", "vision_object_detection_server_hostname", "visual_analysis", "vision_memory", "vision_memory_directory", "camera1", "camera1_enabled", "camera1_fps", "camera1_resolution", "camera2", "camera2_enabled", "camera2_fps", "camera2_resolution", "computer_use", "computer_monitor_recognition", "reading", "reading_fallacy_check", "sound_memory", "speech_memory", "speech_recognition", "ethics_check_enabled", "sound_directory", "sound_codec", "sound_bitrate", "speech_directory", "speech_recognition_enable", "speech_lie_detection", "short_term_memory_time", "sound_memory", "vision_object_detection_remote_enabled", "microphone1_enabledd", "microphone1_device_name", "microphone2_enabled", "microphone2_device_name", "computer_owned_recognition", "ffmpeg_location", "microphone1_enabled", "microphone1_device", "microphone2_enable", "microphone2_device", "sound_reasoning", "reading_reasoning", "speech_reasoning", "working_memory_location", "short_term_memory_location", "long_term_memory_location", "news_watching", "action_commands", "action_detection", "needs_detection", "navigation_detection", "social_needs_detection", "tensorflow_model", "tensorflow_labels", "whisper_model", "visual_analysis_model", "visual_checking", "camera1_resolution_height", "camera1_resolution_width", "camera2_resolution_height", "camera2_resolution_width", "speech_commands", "vision_commands", "action_commands", "phone_commands", "visual_thinking", "sound_recognition", "sound_sample_rate", "sound_channels", "sound_bits_per_sample", "sound_recording_interval", "thought", "microphone1_device_id", "microphone2_device_id", "vision_text_detection", "vision_text_recognition", "vision_face_recognition", "encrypt_thoughts", "watching", "typing_commands", "tensorflow_score"};
	string ftp_settings_array[] = { "ftp_enabled", "ftp_hostname", "ftp_username", "ftp_password", "ftp_vision_directory", "ftp_sound_directory", "ftp_vision_storage_limit", "ftp_sound_storage_limit" };
	string mysql_settings_array[] = { "mysql_hostname", "mysql_username", "mysql_password", "mysql_vision_database", "mysql_sound_database", "mysql_working_memory_database", "mysql_short_term_memory_database", "mysql_long_term_memory_database", "thought_database"};
	string computer_settings_array[] = { "private_computer", "computer_hostname", "computer_username", "computer_password" };
	string listening_settings_array[] = { "listening_seconds_interval", "listening_fallacy_checking", "listening_bias_checking", "listening_literature_device_checking", "listening_axiom_checking", "listening_abuse_checking" , "listening_law_checking" , "listening_dictionary_checking" , "listening_aerospace_engineering" , "listening_algebra" , "listening_artificial_intelligence" , "listening_bash" , "listening_batch" , "listening_beauty" , "listening_biology" , "listening_botany" , "listening_cpp" , "listening_calculus" , "listening_chemistry" , "listening_civil_engineering" , "listening_college_algebra" , "listening_computer_science" , "listening_cryptography" , "listening_dance" , "listening_differential_equation" , "listening_discrete_mathematics" , "listening_ecology" , "listening_economics" , "listening_electrical_engineering" , "listening_engineering" , "listening_ethics" , "listening_game_theory" , "listening_geography" , "listening_geology" , "listening_geomoetry" , "listening_graph_theory" , "listening_internet" , "listening_java" , "listening_linear_algebra" , "listening_logic" , "listening_marketing" , "listening_materials_science" , "listening_mechanical_engineering" , "listening_medicine" , "listening_nautical" , "listening_networking" , "listening_pottery" , "listening_philosophy" , "listening_photography" , "listening_physics" , "listening_poetry" , "listening_political_science" , "listening_probability_and_statistics" , "listening_programming" , "listening_psychiatry" , "listening_psychology" , "listening_sales" , "listening_stocks" , "listening_structural_engineering" , "listening_theatre" , "listening_trigonometry" , "listening_wood_working" , "listening_writing" };
	string visual_checking_settings_array[] = { "visual_seconds_interval", "visual_fallacy_checking", "visual_bias_checking", "visual_literature_device_checking", "visual_axiom_checking", "visual_abuse_checking" , "visual_law_checking" , "visual_dictionary_checking" , "visual_aerospace_engineering" , "visual_algebra" , "visual_artificial_intelligence" , "visual_bash" , "visual_batch" , "visual_beauty" , "visual_biology" , "visual_botany" , "visual_cpp" , "visual_calculus" , "visual_chemistry" , "visual_civil_engineering" , "visual_college_algebra" , "visual_computer_science" , "visual_cryptography" , "visual_dance" , "visual_differential_equation" , "visual_discrete_mathematics" , "visual_ecology" , "visual_economics" , "visual_electrical_engineering" , "visual_engineering" , "visual_ethics" , "visual_game_theory" , "visual_geography" , "visual_geology" , "visual_geomoetry" , "visual_graph_theory" , "visual_internet" , "visual_java" , "visual_linear_algebra" , "visual_logic" , "visual_marketing" , "visual_materials_science" , "visual_mechanical_engineering" , "visual_medicine" , "visual_nautical" , "visual_networking" , "visual_pottery" , "visual_philosophy" , "visual_photography" , "visual_physics" , "visual_poetry" , "visual_political_science" , "visual_probability_and_statistics" , "visual_programming" , "visual_psychiatry" , "visual_psychology" , "visual_sales" , "visual_stocks" , "visual_structural_engineering" , "visual_theatre" , "visual_trigonometry" , "visual_wood_working" , "visual_writing" };
	string reading_checking_settings_array[] = { "reading_seconds_interval", "reading_fallacy_checking", "reading_bias_checking", "reading_literature_device_checking", "reading_axiom_checking", "reading_abuse_checking" , "reading_law_checking" , "reading_dictionary_checking" , "reading_aerospace_engineering" , "reading_algebra" , "reading_artificial_intelligence" , "reading_bash" , "reading_batch" , "reading_beauty" , "reading_biology" , "reading_botany" , "reading_cpp" , "reading_calculus" , "reading_chemistry" , "reading_civil_engineering" , "reading_college_algebra" , "reading_computer_science" , "reading_cryptography" , "reading_dance" , "reading_differential_equation" , "reading_discrete_mathematics" , "reading_ecology" , "reading_economics" , "reading_electrical_engineering" , "reading_engineering" , "reading_ethics" , "reading_game_theory" , "reading_geography" , "reading_geology" , "reading_geomoetry" , "reading_graph_theory" , "reading_internet" , "reading_java" , "reading_linear_algebra" , "reading_logic" , "reading_marketing" , "reading_materials_science" , "reading_mechanical_engineering" , "reading_medicine" , "reading_nautical" , "reading_networking" , "reading_pottery" , "reading_philosophy" , "reading_photography" , "reading_physics" , "reading_poetry" , "reading_political_science" , "reading_probability_and_statistics" , "reading_programming" , "reading_psychiatry" , "reading_psychology" , "reading_sales" , "reading_stocks" , "reading_structural_engineering" , "reading_theatre" , "reading_trigonometry" , "reading_wood_working" , "reading_writing" };
	string remote_mysql_settings_array[] = { "mysql_hostname", "mysql_username", "mysql_password", "mysql_vision_database", "mysql_sound_database", "mysql_working_memory_database", "mysql_short_term_memory_database", "mysql_long_term_memory_database" };
	string whisper_settings_array[] = { "whisper_server_enabled", "whisper_threads", "whisper_hostname", "whisper_username", "whisper_password", "whisper_prompt_seconds", "whisper_command_seconds", "whisper_speech_commands_activation", "whisper_speech_commands_terminator" };
	string llm_server_settings[] = { "llm_server_enabled", "remote_server_eanbled", "llm_hostname", "remote_llm_hostname", "llm_username", "llm_password", "llm_model", "remote_llm_model", "llm_model_image" };
	string driving_settings_array[] = { "driving_enabled", "driving_head_position", "driving_left_mirror", "driving_right_mirror", "driving_center_mirror", "iou_min", "iou_max", "ttc_threshold" };
	vector<string> rows = { "setting TEXT", "value TEXT" };
	string setting;
	string value;

	conn3 = mysql_init(0);
	conn3 = mysql_real_connect(conn3, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	if (conn3)
	{
		_DatabaseFunctions::DropTable(mysql_database, "settings");
		_DatabaseFunctions::CreateTable(mysql_database, "settings", rows);

		for (int x = 0; x <= 92; x++)
		{
			sql1 = "INSERT INTO `settings`(setting, value) VALUES(\"";
			sql1 += normal_settings_array[x];
			sql1 += "\", \"";
				
			if (x == 0)
			{
				if (terms_conditions)
					sql1 += "true";
				else
					sql1 += "false";

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 1)
			{
				if (cuda_accelleration)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 2)
			{
				if (cuda_accelleration_remote_enabled)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 3)
			{
				if (cuda_accelleration_remote_hostname == "")
					sql1 += "NULL";
				else
				{
					sql1 += cuda_accelleration_remote_hostname;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 4)
			{
				if (cuda_accelleration_remote_cores == "")
					sql1 += "NULL";
				else
				{
					sql1 += cuda_accelleration_remote_cores;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 5)
			{
				if (tensor_accelleration)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 6)
			{
				if (tensor_accelleration_remote_enabled)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 7)
			{
				if (tensor_accelleration_remote_hostname == "")
					sql1 += "NULL";
				else
				{
					sql1 += tensor_accelleration_remote_hostname;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 8)
			{
				if (tensor_accelleration_remote_cores == "")
					sql1 += "NULL";
				else
				{
					sql1 += tensor_accelleration_remote_cores;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 9)
			{
				if (working_memory_enabled)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 10)
			{
				if (working_memory_limit == "")
					sql1 += "NULL";
				else
				{
					sql1 += working_memory_limit;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 11)
			{
				if (short_term_memory_enabled)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 12)
			{
				if (short_term_memory_limit == "")
					sql1 += "NULL";
				else
				{
					sql1 += short_term_memory_limit;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 13)
			{
				if (long_term_memory_enabled)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 14)
			{
				if (long_term_memory_limit == "")
					sql1 += "NULL";
				else
				{
					sql1 += long_term_memory_limit;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 15)
			{
				if (speech_memory_enabled)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 16)
			{
				if (vision_object_detection)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 17)
			{
				if (vision_object_detection_cuda)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 18)
			{
				if (vision_object_detection_server)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 19)
			{
				if (vision_object_detection_server_hostname == "")
					sql1 += "NULL";
				else
				{
					sql1 += vision_object_detection_server_hostname;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 20)
			{
				if (visual_analysis)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 21)
			{
				if (vision_memory)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 22)
			{
				if (vision_memory_directory == "")
					sql1 += "NULL";
				else
				{
					sql1 += vision_memory_directory;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 23)
			{
				if (camera1 == "")
					sql1 += "true";
				else
				{
					sql1 += camera1;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 24)
			{
				if (camera1_enabled)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 25)
			{
				if (camera1_fps == NULL)
					sql1 += "NULL";
				else
				{
					sql1 += camera1_fps;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 26)
			{
				if (camera1_resolution == "")
					sql1 += "NULL";
				else
				{
					sql1 += camera1_resolution;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 27)
			{
				if (camera2 == "")
					sql1 += "NULL";
				else
				{
					sql1 += camera2;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 28)
			{
				if (camera2_enabled)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 29)
			{
				if (camera2_fps == NULL)
					sql1 += "NULL";
				else
				{
					sql1 += camera2_fps;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 30)
			{
				if (camera2_resolution == "")
					sql1 += "NULL";
				else
				{
					sql1 += camera2_resolution;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 31)
			{
				if (computer_use)
					sql1 += "true\'\n";
				else
					sql1 += "false\'\n";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 32)
			{
				if (reading)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 33)
			{
				//if (reading_fallacy_check)
				//	sql1 += "true";
				//else
				//	sql1 += "false";
				//sql1 += "\");";
				////cout << "SQL1: " << sql1 << endl;
				//mysql_query(conn3, sql1.c_str());
			}
			else if (x == 34)
			{
				if (sound_memory)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 35)
			{
				if (speech_memory)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 36)
			{
				if (speech_recognition)
					sql1 += "true";
				else
					sql1 += "false";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 37)
			{
				if (ethics_check_enabled)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 38)
			{
				if (sound_directory == "")
					sql1 += "NULL";
				else
				{
					sql1 += sound_directory;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 39)
			{
				if (sound_codec == "")
					sql1 += "NULL";
				else
				{
					sql1 += sound_codec;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 40)
			{
				if (sound_bitrate == "")
					sql1 += "NULL";
				else
				{
					sql1 += sound_bitrate;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 41)
			{
				if (speech_directory == "")
					sql1 += "NULL";
				else
				{
					sql1 += speech_directory;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 42)
			{
				if (speech_recognition_enable)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 43)
			{
				if (speech_lie_detection)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 44)
			{
				if (short_term_memory_time == "")
					sql1 += "NULL";
				else
				{
					sql1 += short_term_memory_time;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 45)
			{
				if (sound_memory)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 46)
			{
				if (vision_object_detection_remote_enabled)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 47)
			{
				if (microphone1_enabled)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 48)
			{
				if (microphone1_device_name == "")
					sql1 += "NULL";
				else
				{
					sql1 += microphone1_device_name;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 49)
			{
				if (microphone2_enabled)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 50)
			{
				if (microphone2_device_name == "")
					sql1 += "NULL";
				else
				{
					sql1 += microphone2_device_name;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 51)
			{
				if (ffmpeg_location == "")
					sql1 += "NULL";
				else
				{
					sql1 += ffmpeg_location;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 52)
			{
				if (sound_reasoning)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 53)
			{
				if (reading_reasoning)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 54)
			{
				if (speech_reasoning)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 55)
			{
				if (working_memory_location == "")
					sql1 += "NULL";
				else
				{
					sql1 += working_memory_location;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 56)
			{
				if (short_term_memory_location == "")
					sql1 += "NULL";
				else
				{
					sql1 += short_term_memory_location;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 57)
			{
				if (long_term_memory_location == "")
					sql1 += "NULL";
				else
				{
					sql1 += long_term_memory_location;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 58)
			{
				if (news_watching)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 59)
			{
				if (action_commands)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 60)
			{
				if (action_detection)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 61)
			{
				if (needs_detection)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 62)
			{
				if (navigation_detection)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 63)
			{
				if (social_needs_detection)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 64)
			{
				if (tensorflow_model == "")
					sql1 += "NULL";
				else
				{
					sql1 += tensorflow_model;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 65)
			{
				if (tensorflow_labels == "")
					sql1 += "NULL";
				else
				{
					sql1 += tensorflow_labels;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 66)
			{
				if (visual_analysis_model == "")
					sql1 += "NULL";
				else
				{
					sql1 += visual_analysis_model;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 67)
			{
				if (visual_checking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 68)
			{
				if (camera1_resolution_height == NULL)
					sql1 += "NULL";
				else
				{
					sql1 += camera1_resolution_height;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 69)
			{
				if (camera1_resolution_width == NULL)
					sql1 += "NULL";
				else
				{
					sql1 += camera1_resolution_width;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 70)
			{
				if (camera2_resolution_height == NULL)
					sql1 += "NULL";
				else
				{
					sql1 += camera2_resolution_height;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 71)
			{
				if (camera2_resolution_width == NULL)
					sql1 += "NULL";
				else
				{
					sql1 += camera2_resolution_width;
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 72)
			{
				if (speech_commands)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 73)
			{
				if (speech_commands)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 74)
			{
				if (vision_commands)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 75)
			{
				if (action_commands)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 76)
			{
				if (phone_commands)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 77)
			{
				if (visual_thinking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 78)
			{
				if (sound_recognition)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 79)
			{
				if (sound_sample_rate == NULL)
					sql1 += "NULL";
				else
				{
					sql1 += to_string(sound_sample_rate);
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 80)
			{
				if (sound_channels == NULL)
					sql1 += "NULL";
				else
				{
					sql1 += to_string(sound_channels);
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 81)
			{
				if (sound_recording_interval == NULL)
					sql1 += "NULL";
				else
				{
					sql1 += to_string(sound_recording_interval);
				}
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 82)
			{
				if (thought)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 83)
			{
				if (microphone1_device_id == NULL)
					sql1 += "NULL";
				else
					sql1 += microphone1_device_id;
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 84)
			{
				if (microphone2_device_id == NULL)
					sql1 += "NULL";
				else
					sql1 += microphone2_device_id;
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 85)
			{
				if (vision_text_detection)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 86)
			{
				if (vision_text_recognition)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 87)
			{
				if (vision_face_recognition)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 88)
			{
				if (encrypt_thoughts)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 89)
			{
				if (watching)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 90)
			{
				if (encryption_key == NULL)
					sql1 += "NULL";
				else
				{
					for (int i = 0; i < 16; i++)
					{
						sql1 += encryption_key[i];
					}
				}
					
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 91)
			{
				if (typing_commands)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 92)
			{
				if (tensorflow_score == NULL)
					sql1 += "NULL";
				else
				{
					sql1 += to_string(tensorflow_score);
				}

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
		}
		mysql_close(conn3);
	}

	conn3 = mysql_init(0);
	conn3 = mysql_real_connect(conn3, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	if (conn3)
	{
		_DatabaseFunctions::DropTable(mysql_database, "ftp_settings");
		_DatabaseFunctions::CreateTable(mysql_database, "ftp_settings", rows);

		for (int x = 0; x <= 7; x++)
		{
			sql1 = "INSERT INTO `ftp_settings`(setting, value) VALUES(\"";
			sql1 += ftp_settings_array[x];
			sql1 += "\", \"";

			if (x == 0)
			{
				if (ftp_enabled)
					sql1 += "true";
				else
					sql1 += "false";
			}
			else if (x == 1)
			{
				if (ftp_hostname == "")
					sql1 += "NULL";
				else
				{
					sql1 += ftp_hostname;
				}
			}
			else if (x == 2)
			{
				if (ftp_username == "")
					sql1 += "NULL";
				else
				{
					sql1 += ftp_username;
				}
			}
			else if (x == 3)
			{
				if (ftp_password == "")
					sql1 += "NULL";
				else
				{
					sql1 += ftp_password;
				}
			}
			else if (x == 4)
			{
				if (ftp_vision_directory == "")
					sql1 += "NULL";
				else
				{
					sql1 += ftp_vision_directory;
				}
			}
			else if (x == 5)
			{
				if (ftp_sound_directory == "")
					sql1 += "NULL";
				else
				{
					sql1 += ftp_sound_directory;
				}
			}
			else if (x == 6)
			{
				if (ftp_vision_storage_limit == "")
					sql1 += "NULL";
				else
				{
					sql1 += ftp_vision_storage_limit;
				}
			}
			else if (x == 7)
			{
				if (ftp_sound_storage_limit == "")
					sql1 += "NULL";
				else
				{
					sql1 += ftp_sound_storage_limit;
				}
			}

			/*cout << "SQL1: " << sql1 << endl;*/
			mysql_query(conn3, sql1.c_str());
		}
	}

	conn3 = mysql_init(0);
	conn3 = mysql_real_connect(conn3, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	if (conn3)
	{
		_DatabaseFunctions::DropTable(mysql_database, "mysql_settings");
		_DatabaseFunctions::CreateTable(mysql_database, "mysql_settings", rows);

		for (int x = 0; x <= 8; x++)
		{
			sql1 = "INSERT INTO `mysql_settings`(setting, value) VALUES(\"";
			sql1 += mysql_settings_array[x];
			sql1 += "\", \"";

			if (x == 0)
			{
				if (mysql_hostname == "")
					sql1 += "NULL";
				else
				{
					sql1 += mysql_hostname;
				}
			}
			else if (x == 1)
			{
				if (mysql_username == "")
					sql1 += "NULL";
				else
				{
					sql1 += mysql_username;
				}
			}
			else if (x == 2)
			{
				if (mysql_password == "")
					sql1 += "NULL";
				else
				{
					sql1 += mysql_password;
				}
			}
			else if (x == 3)
			{
				if (mysql_vision_database == "")
					sql1 += "NULL";
				else
				{
					sql1 += mysql_vision_database;
				}
			}
			else if (x == 4)
			{
				if (mysql_sound_database == "")
					sql1 += "NULL";
				else
				{
					sql1 += mysql_sound_database;
				}
			}
			else if (x == 5)
			{
				//if (mysql_speech_database == "")
				//	sql1 += "NULL";
				//else
				//{
				//	sql1 += mysql_speech_database;
				//}
			}
			else if (x == 6)
			{
				if (mysql_working_memory_database == "")
					sql1 += "NULL";
				else
				{
					sql1 += mysql_working_memory_database;
				}
			}
			else if (x == 7)
			{
				if (mysql_short_term_memory_database == "")
					sql1 += "NULL";
				else
				{
					sql1 += mysql_short_term_memory_database;
				}
			}
			else if (x == 8)
			{
				if (mysql_long_term_memory_database == "")
					sql1 += "NULL";
				else
				{
					sql1 += mysql_long_term_memory_database;
				}
			}
			sql1 += "\");";
			/*cout << "SQL1: " << sql1 << endl;*/
			mysql_query(conn3, sql1.c_str());
		}
	}

	conn3 = mysql_init(0);
	conn3 = mysql_real_connect(conn3, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	if (conn3)
	{
		_DatabaseFunctions::DropTable(mysql_database, "computer_settings");
		_DatabaseFunctions::CreateTable(mysql_database, "computer_settings", rows);

		for (int x = 0; x <= 4; x++)
		{
			sql1 = "INSERT INTO `computer_settings`(setting, value) VALUES(\"";
			sql1 += computer_settings_array[x];
			sql1 += "\", \"";

			if (x == 0)
			{
				if (private_computer)
					sql1 += "true";
				else
					sql1 += "false";
			}
			else if (x == 1)
			{
				if (computer_hostname == "")
					sql1 += "NULL";
				else
				{
					sql1 += computer_hostname;
				}
			}
			else if (x == 2)
			{
				if (computer_username == "")
					sql1 += "NULL";
				else
				{
					sql1 += computer_username;
				}
			}
			else if (x == 3)
			{
				if (computer_password == "")
					sql1 += "NULL";
				else
				{
					sql1 += computer_password;
				}
			}

			sql1 += "\");";
			/*cout << "SQL1: " << sql1 << endl;*/
			mysql_query(conn3, sql1.c_str());
		}
	}

	conn3 = mysql_init(0);
	conn3 = mysql_real_connect(conn3, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	if (conn3)
	{
		_DatabaseFunctions::DropTable(mysql_database, "listening_settings");
		_DatabaseFunctions::CreateTable(mysql_database, "listening_settings", rows);

		for (int x = 0; x <= 62; x++)
		{
			sql1 = "INSERT INTO `listening_settings`(setting, value) VALUES(\"";
			sql1 += normal_settings_array[x];
			sql1 += "\", \"";

			if (x == 0)
			{
				if (listening_seconds_interval == NULL)
					sql1 += "NULL";
				else
					sql1 += "false";

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 1)
			{
				if (listening_fallacy_checking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 2)
			{
				if (listening_bias_checking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 3)
			{
				if (listening_literature_device_checking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 4)
			{
				if (listening_axiom_checking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 5)
			{
				if (listening_abuse_checking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 6)
			{
				if (listening_law_checking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 7)
			{
				if (listening_dictionary_checking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 8)
			{
				if (listening_algebra)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 9)
			{
				if (listening_artificial_intelligence)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 10)
			{
				if (listening_bash)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 11)
			{
				if (listening_batch)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 12)
			{
				if (listening_beauty)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 13)
			{
				if (listening_biology)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 14)
			{
				if (listening_botany)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 15)
			{
				if (listening_cpp)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 16)
			{
				if (listening_calculus)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 17)
			{
				if (listening_chemistry)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 18)
			{
				if (listening_civil_engineering)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 19)
			{
				if (listening_college_algebra)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 20)
			{
				if (listening_computer_science)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
				}
			else if (x == 21)
			{
				if (listening_cryptography)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
				}
			else if (x == 22)
			{
				if (listening_dance)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
				}
			else if (x == 23)
			{
				if (listening_differential_equations)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
				}
			else if (x == 24)
			{
				if (listening_discrete_mathematics)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
				}
			else if (x == 25)
			{
				if (listening_ecology)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
				}
			else if (x == 26)
			{
				if (listening_economics)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
				}
			else if (x == 27)
			{
				if (listening_electrical_engineering)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
				}
			else if (x == 28)
			{
				if (listening_engineering)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 29)
			{
				if (listening_ethics)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
				}
			else if (x == 30)
			{
				if (listening_game_theory)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
				}
			else if (x == 31)
			{
				if (listening_geography)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
				}
			else if (x == 32)
			{
				if (listening_geology)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
				}
			else if (x == 33)
			{
				if (listening_geometry)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
				}
			else if (x == 34)
			{
				if (listening_graph_theory)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
				}
			else if (x == 35)
			{
				if (listening_internet)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
				}
			else if (x == 36)
			{
				if (listening_java)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
				}
			else if (x == 37)
			{
				if (listening_linear_algebra)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
				}
			else if (x == 38)
			{
				if (listening_logic)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
				}
			else if (x == 39)
			{
				if (listening_marketing)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 40)
			{
				if (listening_materials_science)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 41)
			{
				if (listening_mechanical_engineering)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 42)
			{
				if (listening_medicine)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 43)
			{
				if (listening_nautical)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 44)
			{
				if (listening_networking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 45)
			{
				if (listening_pottery)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 46)
			{
				if (listening_philosophy)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 47)
			{
				if (listening_photography)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 48)
			{
				if (listening_physics)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 49)
			{
				if (listening_poetry)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 50)
			{
				if (listening_political_science)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 51)
			{
				if (listening_probability_and_statistics)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 52)
			{
				if (listening_programming)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 53)
			{
				if (listening_psychiatry)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 54)
			{
				if (listening_psychology)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 55)
			{
				if (listening_sales)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 56)
			{
				if (listening_stocks)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 57)
			{
				if (listening_structural_engineering)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 58)
			{
				if (listening_programming)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 59)
			{
				if (listening_theatre)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 60)
			{
				if (listening_trigonometry)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 61)
			{
				if (listening_wood_working)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 62)
			{
				if (listening_wood_working)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
		}
		mysql_close(conn3);
	}

	conn3 = mysql_init(0);
	conn3 = mysql_real_connect(conn3, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	if (conn3)
	{
		_DatabaseFunctions::DropTable(mysql_database, "reading_settings");
		_DatabaseFunctions::CreateTable(mysql_database, "reading_settings", rows);

		for (int x = 0; x <= 62; x++)
		{
			sql1 = "INSERT INTO `reading_settings`(setting, value) VALUES(\"";
			sql1 += normal_settings_array[x];
			sql1 += "\", \"";

			if (x == 0)
			{
				if (reading_seconds_interval == NULL)
					sql1 += "NULL";
				else
					sql1 += "false";

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 1)
			{
				if (reading_fallacy_checking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 2)
			{
				if (reading_bias_checking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 3)
			{
				if (reading_literature_device_checking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 4)
			{
				if (reading_axiom_checking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 5)
			{
				if (reading_abuse_checking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 6)
			{
				if (reading_law_checking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 7)
			{
				if (reading_dictionary_checking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 8)
			{
				if (reading_algebra)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 9)
			{
				if (reading_artificial_intelligence)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 10)
			{
				if (reading_bash)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 11)
			{
				if (reading_batch)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 12)
			{
				if (reading_beauty)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 13)
			{
				if (reading_biology)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 14)
			{
				if (reading_botany)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 15)
			{
				if (reading_cpp)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 16)
			{
				if (reading_calculus)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 17)
			{
				if (reading_chemistry)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 18)
			{
				if (reading_civil_engineering)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 19)
			{
				if (reading_college_algebra)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 20)
			{
				if (reading_computer_science)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 21)
			{
				if (reading_cryptography)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 22)
			{
				if (reading_dance)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 23)
			{
				if (reading_differential_equations)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 24)
			{
				if (reading_discrete_mathematics)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 25)
			{
				if (reading_ecology)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 26)
			{
				if (reading_economics)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 27)
			{
				if (reading_electrical_engineering)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 28)
			{
				if (reading_engineering)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 29)
			{
				if (reading_ethics)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 30)
			{
				if (reading_game_theory)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 31)
			{
				if (reading_geography)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 32)
			{
				if (reading_geology)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 33)
			{
				if (reading_geometry)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 34)
			{
				if (reading_graph_theory)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 35)
			{
				if (reading_internet)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 36)
			{
				if (reading_java)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 37)
			{
				if (reading_linear_algebra)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 38)
			{
				if (reading_logic)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 39)
			{
				if (reading_marketing)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 40)
			{
				if (reading_materials_science)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 41)
			{
				if (reading_mechanical_engineering)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 42)
			{
				if (reading_medicine)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 43)
			{
				if (reading_nautical)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 44)
			{
				if (reading_networking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 45)
			{
				if (reading_pottery)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 46)
			{
				if (reading_philosophy)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 47)
			{
				if (reading_photography)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 48)
			{
				if (reading_physics)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 49)
			{
				if (reading_pottery)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 50)
			{
				if (reading_political_science)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 51)
			{
				if (reading_probability_and_statistics)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 52)
			{
				if (reading_programming)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 53)
			{
				if (reading_psychiatry)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 54)
			{
				if (reading_psychology)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 55)
			{
				if (reading_sales)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 56)
			{
				if (reading_stocks)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 57)
			{
				if (reading_structural_engineering)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 58)
			{
				if (reading_programming)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 59)
			{
				if (reading_theatre)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 60)
			{
				if (reading_trigonometry)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 61)
			{
				if (reading_wood_working)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 62)
			{
				if (reading_wood_working)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
		}
		mysql_close(conn3);
	}

	conn3 = mysql_init(0);
	conn3 = mysql_real_connect(conn3, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	if (conn3)
	{
		_DatabaseFunctions::DropTable(mysql_database, "visual_checking_settings");
		_DatabaseFunctions::CreateTable(mysql_database, "visual_checking_settings", rows);

		for (int x = 0; x <= 62; x++)
		{
			sql1 = "INSERT INTO `visual_checking_settings`(setting, value) VALUES(\"";
			sql1 += visual_checking_settings_array[x];
			sql1 += "\", \"";

			if (x == 0)
			{
				if (visual_seconds_interval == NULL)
					sql1 += "NULL";
				else
					sql1 += "false";

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 1)
			{
				if (visual_fallacy_checking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 2)
			{
				if (visual_bias_checking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 3)
			{
				if (visual_literature_device_checking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 4)
			{
				if (visual_axiom_checking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 5)
			{
				if (visual_abuse_checking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 6)
			{
				if (visual_law_checking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 7)
			{
				if (visual_dictionary_checking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 8)
			{
				if (visual_algebra)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 9)
			{
				if (visual_artificial_intelligence)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 10)
			{
				if (visual_bash)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 11)
			{
				if (visual_batch)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 12)
			{
				if (visual_beauty)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 13)
			{
				if (visual_biology)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 14)
			{
				if (visual_botany)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 15)
			{
				if (visual_cpp)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 16)
			{
				if (visual_calculus)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 17)
			{
				if (visual_chemistry)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 18)
			{
				if (visual_civil_engineering)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 19)
			{
				if (visual_college_algebra)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 20)
			{
				if (visual_computer_science)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 21)
			{
				if (visual_cryptography)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 22)
			{
				if (visual_dance)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 23)
			{
				if (visual_differential_equations)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 24)
			{
				if (visual_discrete_mathematics)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 25)
			{
				if (visual_ecology)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 26)
			{
				if (visual_economics)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 27)
			{
				if (visual_electrical_engineering)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 28)
			{
				if (visual_engineering)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 29)
			{
				if (visual_ethics)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 30)
			{
				if (visual_game_theory)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 31)
			{
				if (visual_geography)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 32)
			{
				if (visual_geology)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 33)
			{
				if (visual_geometry)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 34)
			{
				if (visual_graph_theory)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 35)
			{
				if (visual_internet)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 36)
			{
				if (visual_java)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 37)
			{
				if (visual_linear_algebra)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 38)
			{
				if (visual_logic)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 39)
			{
				if (visual_marketing)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 40)
			{
				if (visual_materials_science)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 41)
			{
				if (visual_mechanical_engineering)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 42)
			{
				if (visual_medicine)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 43)
			{
				if (visual_nautical)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 44)
			{
				if (visual_networking)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 45)
			{
				if (visual_pottery)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 46)
			{
				if (visual_philosophy)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 47)
			{
				if (visual_photography)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 48)
			{
				if (visual_physics)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 49)
			{
				if (visual_pottery)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 50)
			{
				if (visual_political_science)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 51)
			{
				if (visual_probability_and_statistics)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 52)
			{
				if (visual_programming)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 53)
			{
				if (visual_psychiatry)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 54)
			{
				if (visual_psychology)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 55)
			{
				if (visual_sales)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 56)
			{
				if (visual_stocks)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 57)
			{
				if (visual_structural_engineering)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 58)
			{
				if (visual_programming)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 59)
			{
				if (visual_theatre)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 60)
			{
				if (visual_trigonometry)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 61)
			{
				if (visual_wood_working)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 62)
			{
				if (visual_wood_working)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
		}
		mysql_close(conn3);
	}

	conn3 = mysql_init(0);
	conn3 = mysql_real_connect(conn3, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	if (conn3)
	{
		_DatabaseFunctions::DropTable(mysql_database, "whisper_settings");
		_DatabaseFunctions::CreateTable(mysql_database, "whisper_settings", rows);

		for (int x = 0; x <= 91; x++)
		{
			sql1 = "INSERT INTO `whisper_settings`(setting, value) VALUES(\"";
			sql1 += normal_settings_array[x];
			sql1 += "\", \"";

			if (x == 0)
			{
				if (whisper_server_enabled)
					sql1 += "true";
				else
					sql1 += "false";

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			if (x == 1)
			{
				if (whisper_threads == NULL)
					sql1 += "NULL";
				else
					sql1 += to_string(whisper_threads);

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			if (x == 2)
			{
				if (whisper_hostname == "")
					sql1 += "NULL";
				else
					sql1 += whisper_hostname;

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			if (x == 3)
			{
				if (whisper_password == "")
					sql1 += "NULL";
				else
					sql1 += whisper_password;

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			if (x == 4)
			{
				if (whisper_prompt_seconds == NULL)
					sql1 += "NULL";
				else
					sql1 += to_string(whisper_prompt_seconds);

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			if (x == 5)
			{
				if (whisper_command_seconds == NULL)
					sql1 += "NULL";
				else
					sql1 += to_string(whisper_command_seconds);

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			if (x == 6)
			{
				if (whisper_threads == NULL)
					sql1 += "NULL";
				else
					sql1 += to_string(whisper_threads);

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}

		}
		mysql_close(conn3);
	}

	conn3 = mysql_init(0);
	conn3 = mysql_real_connect(conn3, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	if (conn3)
	{
		_DatabaseFunctions::DropTable(mysql_database, "llm_settings");
		_DatabaseFunctions::CreateTable(mysql_database, "llm_settings", rows);

		for (int x = 0; x <= 91; x++)
		{
			sql1 = "INSERT INTO `llm_settings`(setting, value) VALUES(\"";
			sql1 += llm_server_settings[x];
			sql1 += "\", \"";

			if (x == 0)
			{
				if (speech_commands_activation == "")
					sql1 += "true";
				else
					sql1 += speech_commands_activation;

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			if (x == 1)
			{
				if (speech_commands_terminator == "")
					sql1 += "true";
				else
					sql1 += speech_commands_terminator;

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			if (x == 2)
			{
				if (llm_server_enabled)
					sql1 += "true";
				else
					sql1 += "false";

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			if (x == 3)
			{
				if (llm_hostname == "")
					sql1 += "NULL";
				else
					sql1 += llm_hostname;

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			if (x == 4)
			{
				if (llm_username == "")
					sql1 += "NULL";
				else
					sql1 += llm_username;

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			if (x == 5)
			{
				if (llm_password == "")
					sql1 += "NULL";
				else
					sql1 += llm_password;

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			if (x == 6)
			{
				if (llm_model == "")
					sql1 += "NULL";
				else
					sql1 += llm_model;

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			if (x == 7)
			{
				if (remote_llm_model == "")
					sql1 += "NULL";
				else
					sql1 += remote_llm_model;

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			if (x == 8)
			{
				if (llm_model_image == "")
					sql1 += "NULL";
				else
					sql1 += llm_model_image;

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
		}
		mysql_close(conn3);
	}

	conn3 = mysql_init(0);
	conn3 = mysql_real_connect(conn3, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	if (conn3)
	{
		_DatabaseFunctions::DropTable(mysql_database, "driving_settings");
		_DatabaseFunctions::CreateTable(mysql_database, "driving_settings", rows);

		for (int x = 0; x <= 91; x++)
		{
			sql1 = "INSERT INTO `driving_settings`(setting, value) VALUES(\"";
			sql1 += llm_server_settings[x];
			sql1 += "\", \"";

			if (x == 0)
			{
				if (driving_enabled)
					sql1 += "true";
				else
					sql1 += "false";

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			if (x == 1)
			{
				if (driving_head_position == NULL)
					sql1 += "NULL";
				else
					sql1 += driving_head_position;

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			if (x == 2)
			{
				if (driving_left_mirror == NULL)
					sql1 += "NULL";
				else
					sql1 += driving_left_mirror;

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			if (x == 3)
			{
				if (driving_right_mirror == NULL)
					sql1 += "NULL";
				else
					sql1 += driving_right_mirror;

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			if (x == 4)
			{
				if (driving_center_mirror == NULL)
					sql1 += "NULL";
				else
					sql1 += driving_center_mirror;

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			if (x == 5)
			{
				if (iou_min == NULL)
				{
					sql1 += '0';
				}
				else
					sql1 += iou_min;

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			if (x == 6)
			{
				if (iou_max == NULL)
				{
					sql1 += '0';
				}
				else
					sql1 += iou_max;

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			if (x == 7)
			{
				if (ttc_threshold == NULL)
				{
					sql1 += '0';
				}
				else
					sql1 += ttc_threshold;

				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			if (x == 8)
			{
				if (camera1_focal_length == NULL)
					sql1 += "22";
				else
					sql1 += camera1_focal_length;
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			if (x == 9)
			{
				if (camera2_focal_length == NULL)
					sql1 += "22";
				else
					sql1 += camera2_focal_length;
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
		}
		mysql_close(conn3);
	}
}

void _Settings::LoadMySQLSettings()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string mysql_database = "ai_settings";
	string mysql_hostname = _Settings::GetMySQLHostname();
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string normal_settings_array[] = { "terms_conditions", "cuda_accelleration", "cuda_accelleration_remote_enabled", "cuda_accelleration_remote_hostname", "cuda_accelleration_remote_cores", "tensor_accelleration", "tensor_accelleration_remote_enabled", "tensor_accelleration_remote_hostname", "tensor_accelleration_remote_cores", "working_memory_enabled", "working_memory_limit", "short_term_memory_enabled", "short_term_memory_limit", "long_term_memory_enabled", "long_term_memory_limit", "speech_memory_enabled", "vision_object_detection", "vision_object_detection_cuda", "vision_object_detection_server", "vision_object_detection_server_hostname", "visual_analysis", "vision_memory", "vision_memory_directory", "camera1", "camera1_enabled", "camera1_fps", "camera1_resolution", "camera2", "camera2_enabled", "camera2_fps", "camera2_resolution", "computer_use", "computer_monitor_recognition", "reading", "reading_fallacy_check", "sound_memory", "speech_memory", "speech_recognition", "ethics_check_enabled", "sound_directory", "sound_codec", "sound_bitrate", "speech_directory", "speech_recognition_enable", "speech_lie_detection", "short_term_memory_time", "sound_memory", "vision_object_detection_remote_enabled", "microphone1_enabledd", "microphone1_device_name", "microphone2_enabled", "microphone2_device_name", "computer_owned_recognition", "ffmpeg_location", "microphone1_enabled", "microphone1_device", "microphone2_enable", "microphone2_device", "sound_reasoning", "reading_reasoning", "speech_reasoning", "working_memory_location", "short_term_memory_location", "long_term_memory_location", "news_watching", "action_commands", "action_detection", "needs_detection", "navigation_detection", "social_needs_detection", "tensorflow_model", "tensorflow_labels", "whisper_model", "visual_analysis_model", "visual_checking", "camera1_resolution_height", "camera1_resolution_width", "camera2_resolution_height", "camera2_resolution_width", "speech_commands", "vision_commands", "action_commands", "phone_commands", "visual_thinking", "sound_recognition", "sound_sample_rate", "sound_channels", "sound_bits_per_sample", "sound_recording_interval", "thought", "microphone1_device_id", "microphone2_device_id", "vision_text_detection", "vision_text_recognition", "vision_face_recognition", "encrypt_thoughts", "watching", "typing_commands", "tensorflow_score" };
	string ftp_settings_array[] = { "ftp_enabled", "ftp_hostname", "ftp_username", "ftp_password", "ftp_vision_directory", "ftp_sound_directory", "ftp_vision_storage_limit", "ftp_sound_storage_limit" };
	string mysql_settings_array[] = { "mysql_hostname", "mysql_username", "mysql_password", "mysql_vision_database", "mysql_sound_database", "mysql_working_memory_database", "mysql_short_term_memory_database", "mysql_long_term_memory_database", "thought_database" };
	string computer_settings_array[] = { "private_computer", "computer_hostname", "computer_username", "computer_password" };
	string listening_settings_array[] = { "listening_seconds_interval", "listening_fallacy_checking", "listening_bias_checking", "listening_literature_device_checking", "listening_axiom_checking", "listening_abuse_checking" , "listening_law_checking" , "listening_dictionary_checking" , "listening_aerospace_engineering" , "listening_algebra" , "listening_artificial_intelligence" , "listening_bash" , "listening_batch" , "listening_beauty" , "listening_biology" , "listening_botany" , "listening_cpp" , "listening_calculus" , "listening_chemistry" , "listening_civil_engineering" , "listening_college_algebra" , "listening_computer_science" , "listening_cryptography" , "listening_dance" , "listening_differential_equation" , "listening_discrete_mathematics" , "listening_ecology" , "listening_economics" , "listening_electrical_engineering" , "listening_engineering" , "listening_ethics" , "listening_game_theory" , "listening_geography" , "listening_geology" , "listening_geomoetry" , "listening_graph_theory" , "listening_internet" , "listening_java" , "listening_linear_algebra" , "listening_logic" , "listening_marketing" , "listening_materials_science" , "listening_mechanical_engineering" , "listening_medicine" , "listening_nautical" , "listening_networking" , "listening_pottery" , "listening_philosophy" , "listening_photography" , "listening_physics" , "listening_poetry" , "listening_political_science" , "listening_probability_and_statistics" , "listening_programming" , "listening_psychiatry" , "listening_psychology" , "listening_sales" , "listening_stocks" , "listening_structural_engineering" , "listening_theatre" , "listening_trigonometry" , "listening_wood_working" , "listening_writing" };
	string visual_checking_settings_array[] = { "visual_seconds_interval", "visual_fallacy_checking", "visual_bias_checking", "visual_literature_device_checking", "visual_axiom_checking", "visual_abuse_checking" , "visual_law_checking" , "visual_dictionary_checking" , "visual_aerospace_engineering" , "visual_algebra" , "visual_artificial_intelligence" , "visual_bash" , "visual_batch" , "visual_beauty" , "visual_biology" , "visual_botany" , "visual_cpp" , "visual_calculus" , "visual_chemistry" , "visual_civil_engineering" , "visual_college_algebra" , "visual_computer_science" , "visual_cryptography" , "visual_dance" , "visual_differential_equation" , "visual_discrete_mathematics" , "visual_ecology" , "visual_economics" , "visual_electrical_engineering" , "visual_engineering" , "visual_ethics" , "visual_game_theory" , "visual_geography" , "visual_geology" , "visual_geomoetry" , "visual_graph_theory" , "visual_internet" , "visual_java" , "visual_linear_algebra" , "visual_logic" , "visual_marketing" , "visual_materials_science" , "visual_mechanical_engineering" , "visual_medicine" , "visual_nautical" , "visual_networking" , "visual_pottery" , "visual_philosophy" , "visual_photography" , "visual_physics" , "visual_poetry" , "visual_political_science" , "visual_probability_and_statistics" , "visual_programming" , "visual_psychiatry" , "visual_psychology" , "visual_sales" , "visual_stocks" , "visual_structural_engineering" , "visual_theatre" , "visual_trigonometry" , "visual_wood_working" , "visual_writing" };
	string reading_checking_settings_array[] = { "reading_seconds_interval", "reading_fallacy_checking", "reading_bias_checking", "reading_literature_device_checking", "reading_axiom_checking", "reading_abuse_checking" , "reading_law_checking" , "reading_dictionary_checking" , "reading_aerospace_engineering" , "reading_algebra" , "reading_artificial_intelligence" , "reading_bash" , "reading_batch" , "reading_beauty" , "reading_biology" , "reading_botany" , "reading_cpp" , "reading_calculus" , "reading_chemistry" , "reading_civil_engineering" , "reading_college_algebra" , "reading_computer_science" , "reading_cryptography" , "reading_dance" , "reading_differential_equation" , "reading_discrete_mathematics" , "reading_ecology" , "reading_economics" , "reading_electrical_engineering" , "reading_engineering" , "reading_ethics" , "reading_game_theory" , "reading_geography" , "reading_geology" , "reading_geomoetry" , "reading_graph_theory" , "reading_internet" , "reading_java" , "reading_linear_algebra" , "reading_logic" , "reading_marketing" , "reading_materials_science" , "reading_mechanical_engineering" , "reading_medicine" , "reading_nautical" , "reading_networking" , "reading_pottery" , "reading_philosophy" , "reading_photography" , "reading_physics" , "reading_poetry" , "reading_political_science" , "reading_probability_and_statistics" , "reading_programming" , "reading_psychiatry" , "reading_psychology" , "reading_sales" , "reading_stocks" , "reading_structural_engineering" , "reading_theatre" , "reading_trigonometry" , "reading_wood_working" , "reading_writing" };
	string remote_mysql_settings_array[] = { "mysql_hostname", "mysql_username", "mysql_password", "mysql_vision_database", "mysql_sound_database", "mysql_working_memory_database", "mysql_short_term_memory_database", "mysql_long_term_memory_database" };
	string whisper_settings_array[] = { "whisper_server_enabled", "whisper_threads", "whisper_hostname", "whisper_username", "whisper_password", "whisper_prompt_seconds", "whisper_command_seconds", "whisper_speech_commands_activation", "whisper_speech_commands_terminator" };
	string llm_server_settings[] = { "llm_server_enabled", "remote_server_eanbled", "llm_hostname", "remote_llm_hostname", "llm_username", "llm_password", "llm_model", "remote_llm_model", "llm_model_image" };
	string driving_settings_array[] = { "driving_enabled", "driving_head_position", "driving_left_mirror", "driving_right_mirror", "driving_center_mirror", "iou_min", "iou_max", "ttc_threshold" };
	string setting;
	string value;
	string sql1;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM `settings`;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);
	
	while (row = mysql_fetch_row(result))
	{
		// There should be a loop iterating through the settings_arrays members and check if the current row[0] is equal to one of the settings, the program should assign the value of row[1] which is the value of the datamembers which are the exact names in the string arrays. 
		for (int i = 0; i <= 92; i++)
		{
			if (strcmp(row[0], normal_settings_array[i].c_str()) == 0)
			{
				// Assuming the data member is a boolean or string
				if (strcmp(normal_settings_array[i].c_str(), "terms_conditions") == 0)
					terms_conditions = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "cuda_accelleration") == 0)
					cuda_accelleration = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "cuda_accelleration_remote_enabled") == 0)
					cuda_accelleration_remote_enabled = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "cuda_accelleration_remote_hostname") == 0)
					cuda_accelleration_remote_hostname = row[1];
				else if (strcmp(normal_settings_array[i].c_str(), "cuda_accelleration_remote_cores") == 0)
					cuda_accelleration_remote_cores = atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "tensor_accelleration") == 0)
					tensor_accelleration = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "tensor_accelleration_remote_enabled") == 0)
					tensor_accelleration_remote_enabled = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "tensor_accelleration_remote_hostname") == 0)
					tensor_accelleration_remote_hostname = row[1];
				else if (strcmp(normal_settings_array[i].c_str(), "tensor_accelleration_remote_cores") == 0)
					tensor_accelleration_remote_cores = atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "working_memory_enabled") == 0)
					working_memory_enabled = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "working_memory_limit") == 0)
					working_memory_limit = atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "short_term_memory_enabled") == 0)
					short_term_memory_enabled = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "short_term_memory_limit") == 0)
					short_term_memory_limit = atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "long_term_memory_enabled") == 0)
					long_term_memory_enabled = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "long_term_memory_limit") == 0)
					long_term_memory_limit = atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "speech_memory_enabled") == 0)
					speech_memory_enabled = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "vision_object_detection") == 0)
					vision_object_detection = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "vision_object_detection_cuda") == 0)
					vision_object_detection_cuda = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "vision_object_detection_server") == 0)
					vision_object_detection_server = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "vision_object_detection_server_hostname") == 0)
					vision_object_detection_server_hostname = row[1];
				else if (strcmp(normal_settings_array[i].c_str(), "visual_analysis") == 0)
					visual_analysis = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "vision_memory") == 0)
					vision_memory = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "vision_memory_directory") == 0)
					vision_memory_directory = row[1];
				else if (strcmp(normal_settings_array[i].c_str(), "camera1") == 0)
					camera1 = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "camera1_enabled") == 0)
					camera1_enabled = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "camera1_fps") == 0)
					camera1_fps = atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "camera1_resolution") == 0)
					camera1_resolution = row[1];
				else if (strcmp(normal_settings_array[i].c_str(), "camera2") == 0)
					camera2 = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "camera2_enabled") == 0)
					camera2_enabled = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "camera2_fps") == 0)
					camera2_fps = atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "camera2_resolution") == 0)
					camera2_resolution = row[1];
				else if (strcmp(normal_settings_array[i].c_str(), "computer_use") == 0)
					computer_use = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "computer_monitor_recognition") == 0)
					computer_monitor_recognition = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "reading") == 0)
					reading = (bool)atoi(row[1]);
				//else if (strcmp(normal_settings_array[i].c_str(), "reading_fallacy_check") == 0)
				//    reading_fallacy_check = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "sound_memory") == 0)
					sound_memory = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "speech_memory") == 0)
					speech_memory = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "speech_recognition") == 0)
					speech_recognition = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "ethics_check_enabled") == 0)
					ethics_check_enabled = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "sound_directory") == 0)
					sound_directory = row[1];
				else if (strcmp(normal_settings_array[i].c_str(), "sound_codec") == 0)
					sound_codec = row[1];
				else if (strcmp(normal_settings_array[i].c_str(), "sound_bitrate") == 0)
					sound_bitrate = atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "speech_directory") == 0)
					speech_directory = row[1];
				else if (strcmp(normal_settings_array[i].c_str(), "speech_recognition_enable") == 0)
					speech_recognition_enable = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "speech_lie_detection") == 0)
					speech_lie_detection = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "short_term_memory_time") == 0)
					short_term_memory_time = atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "vision_object_detection_remote_enabled") == 0)
					vision_object_detection_remote_enabled = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "microphone1_enabled") == 0)
					microphone1_enabled = (bool)atoi(row[1]);
				//else if (strcmp(normal_settings_array[i].c_str(), "microphone1_device_name") == 0)
				//	strcpy(microphone1_device_name, row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "microphone2_enabled") == 0)
					microphone2_enabled = (bool)atoi(row[1]);
				//else if (strcmp(normal_settings_array[i].c_str(), "microphone2_device_name") == 0)
				//	strcpy(microphone2_device_name, row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "computer_owned_recognition") == 0)
					computer_owned_recognition = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "ffmpeg_location") == 0)
					ffmpeg_location = row[1];
				else if (strcmp(normal_settings_array[i].c_str(), "microphone1_enabled") == 0)
					microphone1_enabled = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "microphone1_device") == 0)
					microphone1_device_id = atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "microphone2_enable") == 0)
					microphone2_enabled = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "microphone2_device") == 0)
					microphone2_device_id = atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "sound_reasoning") == 0)
					sound_reasoning = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "reading_reasoning") == 0)
					reading_reasoning = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "speech_reasoning") == 0)
					speech_reasoning = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "working_memory_location") == 0)
					working_memory_location = row[1];
				else if (strcmp(normal_settings_array[i].c_str(), "short_term_memory_location") == 0)
					short_term_memory_location = row[1];
				else if (strcmp(normal_settings_array[i].c_str(), "long_term_memory_location") == 0)
					long_term_memory_location = row[1];
				else if (strcmp(normal_settings_array[i].c_str(), "news_watching") == 0)
					news_watching = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "action_commands") == 0)
					action_commands = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "action_detection") == 0)
					action_detection = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "needs_detection") == 0)
					needs_detection = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "navigation_detection") == 0)
					navigation_detection = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "social_needs_detection") == 0)
					social_needs_detection = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "tensorflow_model") == 0)
					tensorflow_model = row[1];
				else if (strcmp(normal_settings_array[i].c_str(), "tensorflow_labels") == 0)
					tensorflow_labels = row[1];
				else if (strcmp(normal_settings_array[i].c_str(), "whisper_model") == 0)
					whisper_model = row[1];
				else if (strcmp(normal_settings_array[i].c_str(), "visual_analysis_model") == 0)
					visual_analysis_model = row[1];
				else if (strcmp(normal_settings_array[i].c_str(), "visual_checking") == 0)
					visual_checking = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "camera1_resolution_height") == 0)
					camera1_resolution_height = atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "camera1_resolution_width") == 0)
					camera1_resolution_width = atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "camera2_resolution_height") == 0)
					camera2_resolution_height = atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "camera2_resolution_width") == 0)
					camera2_resolution_width = atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "speech_commands") == 0)
					speech_commands = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "vision_commands") == 0)
					vision_commands = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "phone_commands") == 0)
					phone_commands = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "visual_thinking") == 0)
					visual_thinking = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "sound_recognition") == 0)
					sound_recognition = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "sound_sample_rate") == 0)
					sound_sample_rate = atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "sound_channels") == 0)
					sound_channels = atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "sound_bits_per_sample") == 0)
					sound_bits_per_sample = atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "sound_recording_interval") == 0)
					sound_recording_interval = atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "thought") == 0)
					thought = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "microphone1_device_id") == 0)
					microphone1_device_id = atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "microphone2_device_id") == 0)
					microphone2_device_id = atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "vision_text_detection") == 0)
					vision_text_detection = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "vision_text_recognition") == 0)
					vision_text_recognition = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "vision_face_recognition") == 0)
					vision_face_recognition = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "encrypt_thoughts") == 0)
					encrypt_thoughts = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "watching") == 0)
					watching = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "typing_commands") == 0)
					typing_commands = (bool)atoi(row[1]);
				else if (strcmp(normal_settings_array[i].c_str(), "encryption_key") == 0)
				{
					string keyStr = row[1];

					for (int j = 0; j < 16; j++)
					{
						string byteStr = keyStr.substr(j * 2, 2);
						encryption_key[j] = (unsigned char)stoul(byteStr, nullptr, 16);
					}
				}
				else if (strcmp(normal_settings_array[i].c_str(), "tensorflow_score") == 0)
					tensorflow_score = stod(row[1]);
			}
		}
	}

	sql1 = "SELECT * FROM `ftp_settings`;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	while (row = mysql_fetch_row(result))
	{
		// There should be a loop iterating through the settings_arrays members and check if the current row[0] is equal to one of the settings, the program should assign the value of row[1] which is the value of the datamembers which are the exact names in the string arrays. 
		for (int i = 0; i < 8; i++)
		{
			if (strcmp(row[0], ftp_settings_array[i].c_str()) == 0)
			{
				// Assuming the data member is a boolean or string
				if (strcmp(ftp_settings_array[i].c_str(), "ftp_enabled") == 0)
					ftp_enabled = (bool)atoi(row[1]);
				else if (strcmp(ftp_settings_array[i].c_str(), "ftp_hostname") == 0)
					ftp_hostname = row[1];
				else if (strcmp(ftp_settings_array[i].c_str(), "ftp_username") == 0)
					ftp_username = row[1];
				else if (strcmp(ftp_settings_array[i].c_str(), "ftp_password") == 0)
					ftp_password = row[1];
				else if (strcmp(ftp_settings_array[i].c_str(), "ftp_vision_directory") == 0)
					ftp_vision_directory = row[1];
				else if (strcmp(ftp_settings_array[i].c_str(), "ftp_sound_directory") == 0)
					ftp_sound_directory = row[1];
				else if (strcmp(ftp_settings_array[i].c_str(), "ftp_vision_storage_limit") == 0)
					ftp_vision_storage_limit = atoi(row[1]);
				else if (strcmp(ftp_settings_array[i].c_str(), "ftp_sound_storage_limit") == 0)
					ftp_sound_storage_limit = atoi(row[1]);
			}
		}
	}

	sql1 = "SELECT * FROM `mysql_settings`;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	while (row = mysql_fetch_row(result))
	{
		// There should be a loop iterating through the settings_arrays members and check if the current row[0] is equal to one of the settings, the program should assign the value of row[1] which is the value of the datamembers which are the exact names in the string arrays. 
		for (int i = 0; i < 9; i++)
		{
			if (strcmp(row[0], mysql_settings_array[i].c_str()) == 0)
			{
				if (mysql_settings_array[i] == "mysql_hostname") {
					mysql_hostname = row[1];
				}
				else if (mysql_settings_array[i] == "mysql_username") {
					mysql_username = row[1];
				}
				else if (mysql_settings_array[i] == "mysql_password") {
					mysql_password = row[1];
				}
				else if (mysql_settings_array[i] == "mysql_vision_database") {
					mysql_vision_database = row[1];
				}
				else if (mysql_settings_array[i] == "mysql_sound_database") {
					mysql_sound_database = row[1];
				}
				//else if (mysql_settings_array[i] == "mysql_speech_database") {
				//	mysql_speech_database = row[1];
				//}
				else if (mysql_settings_array[i] == "mysql_working_memory_database") {
					mysql_working_memory_database = row[1];
				}
				else if (mysql_settings_array[i] == "mysql_short_term_memory_database") {
					mysql_short_term_memory_database = row[1];
				}
				else if (mysql_settings_array[i] == "mysql_long_term_memory_database") {
					mysql_long_term_memory_database = row[1];
				}
				else if (mysql_settings_array[i] == "thought_database") {
					thought = row[1];
				}
			}
		}
	}

	sql1 = "SELECT * FROM `computer_settings`;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	while (row = mysql_fetch_row(result))
	{
		// There should be a loop iterating through the settings_arrays members and check if the current row[0] is equal to one of the settings, the program should assign the value of row[1] which is the value of the datamembers which are the exact names in the string arrays. 
		for (int i = 0; i < 4; i++)
		{
			if (strcmp(row[0], computer_settings_array[i].c_str()) == 0)
			{
				// Assuming the data member is a boolean or string
				if (strcmp(computer_settings_array[i].c_str(), "computer_use") == 0)
					computer_use = (bool)atoi(row[1]);
				else if (strcmp(computer_settings_array[i].c_str(), "computer_hostname") == 0)
					computer_hostname = row[1];
				else if (strcmp(computer_settings_array[i].c_str(), "computer_username") == 0)
					computer_username = row[1];
				else if (strcmp(computer_settings_array[i].c_str(), "computer_password") == 0)
					computer_password = row[1];
			}
		}
	}

	sql1 = "SELECT * FROM `listening_settings`;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	while (row = mysql_fetch_row(result))
	{
		// There should be a loop iterating through the settings_arrays members and check if the current row[0] is equal to one of the settings, the program should assign the value of row[1] which is the value of the datamembers which are the exact names in the string arrays. 
		for (int i = 0; i < 63; i++)
		{
			if (strcmp(row[0], listening_settings_array[i].c_str()) == 0)
			{
				if (listening_settings_array[i] == "listening_seconds_interval") {
					listening_seconds_interval = atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_fallacy_checking") {
					listening_fallacy_checking = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_bias_checking") {
					listening_bias_checking = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_literature_device_checking") {
					listening_literature_device_checking = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_axiom_checking") {
					listening_axiom_checking = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_abuse_checking") {
					listening_abuse_checking = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_law_checking") {
					listening_law_checking = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_dictionary_checking") {
					listening_dictionary_checking = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_aerospace_engineering") {
					listening_aerospace_engineering = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_algebra") {
					listening_algebra = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_artificial_intelligence") {
					listening_artificial_intelligence = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_bash") {
					listening_bash = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_batch") {
					listening_batch = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_beauty") {
					listening_beauty = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_biology") {
					listening_biology = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_botany") {
					listening_botany = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_cpp") {
					listening_cpp = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_calculus") {
					listening_calculus = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_chemistry") {
					listening_chemistry = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_civil_engineering") {
					listening_civil_engineering = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_college_algebra") {
					listening_college_algebra = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_computer_science") {
					listening_computer_science = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_cryptography") {
					listening_cryptography = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_dance") {
					listening_dance = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_differential_equation") {
					listening_differential_equations = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_discrete_mathematics") {
					listening_discrete_mathematics = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_ecology") {
					listening_ecology = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_economics") {
					listening_economics = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_electrical_engineering") {
					listening_electrical_engineering = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_engineering") {
					listening_engineering = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_ethics") {
					listening_ethics = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_game_theory") {
					listening_game_theory = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_geography") {
					listening_geography = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_geology") {
					listening_geology = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_geomoetry") {
					listening_geometry = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_graph_theory") {
					listening_graph_theory = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_internet") {
					listening_internet = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_java") {
					listening_java = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_linear_algebra") {
					listening_linear_algebra = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_logic") {
					listening_logic = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_marketing") {
					listening_marketing = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_materials_science") {
					listening_materials_science = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_mechanical_engineering") {
					listening_mechanical_engineering = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_medicine") {
					listening_medicine = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_nautical") {
					listening_nautical = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_networking") {
					listening_networking = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_pottery") {
					listening_pottery = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_philosophy") {
					listening_philosophy = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_photography") {
					listening_photography = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_physics") {
					listening_physics = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_poetry") {
					listening_poetry = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_political_science") {
					listening_political_science = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_probability_and_statistics") {
					listening_probability_and_statistics = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_programming") {
					listening_programming = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_psychiatry") {
					listening_psychiatry = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_psychology") {
					listening_psychology = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_sales") {
					listening_sales = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_stocks") {
					listening_stocks = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_structural_engineering") {
					listening_structural_engineering = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_theatre") {
					listening_theatre = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_trigonometry") {
					listening_trigonometry = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_wood_working") {
					listening_wood_working = (bool)atoi(row[1]);
				}
				else if (listening_settings_array[i] == "listening_writing") {
					listening_writing = (bool)atoi(row[1]);
				}
			}
		}
	}

	sql1 = "SELECT * FROM `visual_checking_settings`;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	while (row = mysql_fetch_row(result))
	{
		// There should be a loop iterating through the settings_arrays members and check if the current row[0] is equal to one of the settings, the program should assign the value of row[1] which is the value of the datamembers which are the exact names in the string arrays. 
		for (int i = 0; i < 63; i++)
		{
			if (strcmp(row[0], visual_checking_settings_array[i].c_str()) == 0)
			{
				if (visual_checking_settings_array[i] == "visual_seconds_interval") {
					visual_seconds_interval = atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_fallacy_checking") {
					visual_fallacy_checking = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_bias_checking") {
					visual_bias_checking = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_literature_device_checking") {
					visual_literature_device_checking = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_axiom_checking") {
					visual_axiom_checking = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_abuse_checking") {
					visual_abuse_checking = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_law_checking") {
					visual_law_checking = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_dictionary_checking") {
					visual_dictionary_checking = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_aerospace_engineering") {
					visual_aerospace_engineering = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_algebra") {
					visual_algebra = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_artificial_intelligence") {
					visual_artificial_intelligence = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_bash") {
					visual_bash = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_batch") {
					visual_batch = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_beauty") {
					visual_beauty = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_biology") {
					visual_biology = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_botany") {
					visual_botany = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_cpp") {
					visual_cpp = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_calculus") {
					visual_calculus = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_chemistry") {
					visual_chemistry = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_civil_engineering") {
					visual_civil_engineering = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_college_algebra") {
					visual_college_algebra = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_computer_science") {
					visual_computer_science = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_cryptography") {
					visual_cryptography = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_dance") {
					visual_dance = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_differential_equation") {
					visual_differential_equations = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_discrete_mathematics") {
					visual_discrete_mathematics = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_ecology") {
					visual_ecology = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_economics") {
					visual_economics = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_electrical_engineering") {
					visual_electrical_engineering = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_engineering") {
					visual_engineering = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_ethics") {
					visual_ethics = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_game_theory") {
					visual_game_theory = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_geography") {
					visual_geography = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_geology") {
					visual_geology = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_geomoetry") {
					visual_geometry = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_graph_theory") {
					visual_graph_theory = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_internet") {
					visual_internet = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_java") {
					visual_java = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_linear_algebra") {
					visual_linear_algebra = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_logic") {
					visual_logic = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_marketing") {
					visual_marketing = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_materials_science") {
					visual_materials_science = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_mechanical_engineering") {
					visual_mechanical_engineering = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_medicine") {
					visual_medicine = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_nautical") {
					visual_nautical = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_networking") {
					visual_networking = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_pottery") {
					visual_pottery = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_philosophy") {
					visual_philosophy = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_photography") {
					visual_photography = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_physics") {
					visual_physics = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_poetry") {
					visual_poetry = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_political_science") {
					visual_political_science = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_probability_and_statistics") {
					visual_probability_and_statistics = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_programming") {
					visual_programming = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_psychiatry") {
					visual_psychiatry = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_psychology") {
					visual_psychology = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_sales") {
					visual_sales = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_stocks") {
					visual_stocks = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_structural_engineering") {
					visual_structural_engineering = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_theatre") {
					visual_theatre = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_trigonometry") {
					visual_trigonometry = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_wood_working") {
					visual_wood_working = (bool)atoi(row[1]);
				}
				else if (visual_checking_settings_array[i] == "visual_writing") {
					visual_writing = (bool)atoi(row[1]);
				}
			}
		}
	}

	sql1 = "SELECT * FROM `reading_settings`;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	while (row = mysql_fetch_row(result))
	{
		// There should be a loop iterating through the settings_arrays members and check if the current row[0] is equal to one of the settings, the program should assign the value of row[1] which is the value of the datamembers which are the exact names in the string arrays. 
		for (int i = 0; i < 63; i++)
		{
			if (strcmp(row[0], reading_checking_settings_array[i].c_str()) == 0)
			{
				if (reading_checking_settings_array[i] == "reading_seconds_interval") {
					reading_seconds_interval = atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_fallacy_checking") {
					reading_fallacy_checking = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_bias_checking") {
					reading_bias_checking = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_literature_device_checking") {
					reading_literature_device_checking = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_axiom_checking") {
					reading_axiom_checking = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_abuse_checking") {
					reading_abuse_checking = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_law_checking") {
					reading_law_checking = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_dictionary_checking") {
					reading_dictionary_checking = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_aerospace_engineering") {
					reading_aerospace_engineering = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_algebra") {
					reading_algebra = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_artificial_intelligence") {
					reading_artificial_intelligence = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_bash") {
					reading_bash = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_batch") {
					reading_batch = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_beauty") {
					reading_beauty = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_biology") {
					reading_biology = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_botany") {
					reading_botany = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_cpp") {
					reading_cpp = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_calculus") {
					reading_calculus = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_chemistry") {
					reading_chemistry = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_civil_engineering") {
					reading_civil_engineering = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_college_algebra") {
					reading_college_algebra = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_computer_science") {
					reading_computer_science = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_cryptography") {
					reading_cryptography = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_dance") {
					reading_dance = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_differential_equation") {
					reading_differential_equations = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_discrete_mathematics") {
					reading_discrete_mathematics = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_ecology") {
					reading_ecology = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_economics") {
					reading_economics = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_electrical_engineering") {
					reading_electrical_engineering = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_engineering") {
					reading_engineering = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_ethics") {
					reading_ethics = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_game_theory") {
					reading_game_theory = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_geography") {
					reading_geography = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_geology") {
					reading_geology = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_geomoetry") {
					reading_geometry = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_graph_theory") {
					reading_graph_theory = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_internet") {
					reading_internet = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_java") {
					reading_java = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_linear_algebra") {
					reading_linear_algebra = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_logic") {
					reading_logic = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_marketing") {
					reading_marketing = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_materials_science") {
					reading_materials_science = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_mechanical_engineering") {
					reading_mechanical_engineering = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_medicine") {
					reading_medicine = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_nautical") {
					reading_nautical = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_networking") {
					reading_networking = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_pottery") {
					reading_pottery = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_philosophy") {
					reading_philosophy = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_photography") {
					reading_photography = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_physics") {
					reading_physics = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_poetry") {
					reading_poetry = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_political_science") {
					reading_political_science = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_probability_and_statistics") {
					reading_probability_and_statistics = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_programming") {
					reading_programming = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_psychiatry") {
					reading_psychiatry = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_psychology") {
					reading_psychology = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_sales") {
					reading_sales = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_stocks") {
					reading_stocks = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_structural_engineering") {
					reading_structural_engineering = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_theatre") {
					reading_theatre = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_trigonometry") {
					reading_trigonometry = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_wood_working") {
					reading_wood_working = (bool)atoi(row[1]);
				}
				else if (reading_checking_settings_array[i] == "reading_writing") {
					reading_writing = (bool)atoi(row[1]);
				}
			}
		}
	}

	sql1 = "SELECT * FROM `whisper_settings`;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	while (row = mysql_fetch_row(result))
	{
		// There should be a loop iterating through the settings_arrays members and check if the current row[0] is equal to one of the settings, the program should assign the value of row[1] which is the value of the datamembers which are the exact names in the string arrays. 
		for (int i = 0; i < 7; i++)
		{
			if (strcmp(row[0], whisper_settings_array[i].c_str()) == 0)
			{
				if (whisper_settings_array[i] == "whisper_server_enabled") {
					whisper_server_enabled = (bool)atoi(row[1]);
				}
				else if (whisper_settings_array[i] == "whisper_threads") {
					whisper_threads = atoi(row[1]);
				}
				else if (whisper_settings_array[i] == "whisper_model") {
					whisper_model = row[1];
				}
				else if (whisper_settings_array[i] == "whisper_hostname") {
					whisper_hostname = row[1];
				}
				else if (whisper_settings_array[i] == "whisper_username") {
					whisper_username = row[1];
				}
				else if (whisper_settings_array[i] == "whisper_password") {
					whisper_password = row[1];
				}
				else if (whisper_settings_array[i] == "whisper_prompt_seconds") {
					whisper_prompt_seconds = atoi(row[1]);
				}
				else if (whisper_settings_array[i] == "whisper_command_seconds") {
					whisper_command_seconds = atoi(row[1]);
				}
				else if (whisper_settings_array[i] == "whisper_speech_commands_activation") {
					speech_commands_activation = row[1];
				}
				else if (whisper_settings_array[i] == "whisper_speech_commands_terminator") {
					speech_commands_terminator = row[1];
				}
			}
			
		}
	}

	sql1 = "SELECT * FROM `llm_settings`;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	while (row = mysql_fetch_row(result))
	{
		// There should be a loop iterating through the settings_arrays members and check if the current row[0] is equal to one of the settings, the program should assign the value of row[1] which is the value of the datamembers which are the exact names in the string arrays. 
		for (int i = 0; i < 9; i++)
		{
			if (strcmp(row[0], llm_server_settings[i].c_str()) == 0)
			{
				if (llm_server_settings[i] == "llm_server_enabled") {
					llm_server_enabled = (bool)atoi(row[1]);
				}
				else if (llm_server_settings[i] == "remote_llm_server_enabled") {
					remote_llm_server_enabled = (bool)atoi(row[1]);
				}
				else if (llm_server_settings[i] == "llm_hostname") {
					llm_hostname = row[1];
				}
				else if (llm_server_settings[i] == "remote_llm_hostname") {
					//remote_llm_hostnames = row[1];
				}
				else if (llm_server_settings[i] == "llm_username") {
					llm_username = row[1];
				}
				else if (llm_server_settings[i] == "llm_password") {
					llm_password = row[1];
				}
				else if (llm_server_settings[i] == "llm_model") {
					llm_model = row[1];
				}
				else if (llm_server_settings[i] == "remote_llm_model") {
					remote_llm_model = row[1];
				}
				else if (llm_server_settings[i] == "llm_model_image") {
					llm_model_image = row[1];
				}
			}
		}
	}

	sql1 = "SELECT * FROM `driving_settings`;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	while (row = mysql_fetch_row(result))
	{
		// There should be a loop iterating through the settings_arrays members and check if the current row[0] is equal to one of the settings, the program should assign the value of row[1] which is the value of the datamembers which are the exact names in the string arrays. 
		for (int i = 0; i < 5; i++)
		{
			if (strcmp(row[0], driving_settings_array[i].c_str()) == 0)
			{
				if (driving_settings_array[i] == "driving_enabled")
				{
					driving_enabled = (bool)atoi(row[1]);
				}
				else if (driving_settings_array[i] == "driving_head_position")
				{
					driving_head_position = atof(row[1]);
				}
				else if (driving_settings_array[i] == "driving_left_mirror")
				{
					driving_left_mirror = atof(row[1]);
				}
				else if (driving_settings_array[i] == "driving_right_mirror")
				{
					driving_right_mirror = atof(row[1]);
				}
				else if (driving_settings_array[i] == "driving_center_mirror")
				{
					driving_center_mirror = atof(row[1]);
				}
				else if (driving_settings_array[i] == "iou_min")
				{
					iou_min = stod(row[1]);
				}
				else if (driving_settings_array[i] == "iou_max")
				{
					iou_max = stod(row[1]);
				}
				else if (driving_settings_array[i] == "ttc_threshold")
				{
					ttc_threshold = stod(row[1]);
				}
			}
		}
	}
}

//bool _Settings::GetNavigationDetectionEnable()
//{
//	string mysql_username = _Settings::GetMySQLUsername();
//	string mysql_password = _Settings::GetMySQLPassword();
//	return false;
//}
//
//bool _Settings::GetSocialNeedsDetectionEnable()
//{
//	string mysql_username = _Settings::GetMySQLUsername();
//	string mysql_password = _Settings::GetMySQLPassword();
//	return false;
//}