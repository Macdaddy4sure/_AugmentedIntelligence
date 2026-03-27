_AugmentedIntelligence Documentation Install and Configuration Windows

0. What it does
    a. Inform the user about recording consent laws
    b. Record still frames from a webcam or video recording device
    c. Record audio from microphone
    d. Get transcription with Whisper from the microphone
    e. Get Speech Command keyword
    f. Get speech command command transcribed with Whisper for transcription
        i.     Find Trigonometric functions calculation of variable
        ii.    Search Wikipedia, Wikisimple, Wikihow, Wikiquote, Wikisource, books/literature, dictionary, Word vectors, Lists
        iii.   Create prompt for Large Language Models
        iv.    Calculate Algebraic, Geometric, Trigonometric, Calculus, Differential Equations, and Statistics functions
        v.     Create deductive arguments from text
        vi.    Create Inductive arguments from text
        vii.   Fallacy check working memory, last x seconds, and and prepared text
        viii.  Bias check working memory, last x seconds, and prepared text
        ix.    Translate any language to English form working memory, last x seconds, prepared text
        x.     Translate English to any language from working memory, last x seconds, prepared text
        xi.    Find the last time user has seen an item, show last location
        xii.   Part of speech tag working memory, reading, and last x sentences
        xiii.  Driving mode // work in progress
        xiv.   Reading mode // work in progress
        xv.    Add data to a string and use in previous commands
        xvi.   Get a setting value
        xvii.  Change a setting
        xviii. Manual Memory Management of Working, Short Term, and Long Term Memory Arrays/Apparatus
        xix.   Image Analysis
        xx.    Memory Search Engines // Work in Progress
    g. On the saved image use Tensorflow object detection and save image of detections
    h. Save record/row of image into MySQL with object detection classes and analysis of image if enabled
    i. Save record/row of wav file to MySQL with transcription and date
    j. Save to Short-Term Memory variables/array/apparatus
    k. FTP memory upload for long term storage
    l. Court room objections listening
    m. Axioms detection listening
    n. Fallacy check listening
    o. Bias Check listening
    p. Law Checking listening
    q. Remote LLM Server capability
    r. Bible verse search

0a. What I want it to do
    a. Speech Commnands
        i. Writing mode
            1. Cheating ... using LLM?
            2. Not so cheating?
                - There should be a method that enables
    b. Various Sports modes
        i.
    c. Class mode vocabulary detection
    d. Memory Management
    e. Programming mode
    f. Gaming mode
    g. Household chore mode
    h. Computer Troubleshooting mode
    i. Problem solving mode
    j. Automation
    k. Computer Use mode
        i.   Private computer mode
        ii.  Image detection mode
        iii. Application profiles
    l. Wikihow articles integration
    m. LLM Example prompts
    n. NLU (Natural Language Understanding)
    o. Learning?
    p. Remote Object Detection
    q. Typing mode?
    r. Speech
    s. Reasonnig mode
    t. Profiles
    u. Faster than now Reasoning

0b. What this should not be
    a. A way for people to judge others
    b. A way for people to hurt or harm others

1. For setting up _AugmentedIntelligence is absolutely free.
2. Boot a Windows Machine like a laptop or desktop, there are several modes that will fit your use case.
3. Download _AugmentedIntelligence if you have not already from the following link: 
    http://macdaddy4sure.ai/Downloads/_AugmentedIntelligence/_AugentedIntelligence.zip
4. Download and install Ollama
    a. After downloading Ollama, search https://ollama.com/library for a language model you like
    b. Run: ollama run xxx:x where 'xxx' is the model and type of install in Command
    c. Run: ollama serve
5. Download and install MySQL Community
6. Extract the _AugmentedIntelligenece.zip file. Recommended to C:/_AugmentedIntelligence
7. Open Command prompt and type: mysql -u root -p
    a. Press enter, then enter the your chosen MySQL password
    b. Inside the extracted directory there should be an 'localhost.sql' file.
    c. Move the localhost.sql file to a directory that is simple to write down and write. Example: C:/localhost.sql
    d. in CMD: 'source C:/localhost.sql' or the path of the file which will import the sql file
8. The extracted directory, open the RTAudioDevices.exe in the command line
    a. Note that you need two microphones to run AugmentedIntelligence
        i.  One Microphone for global speech recognition and the other for voice commands
        ii. Use the RTAudioDevices.exe to find your microphone ids, these will be used within _AugmentedIntelligence.exe 
9. The executable is located in ../x64/Release/AugmentedIntelligence
    a. All of the .dll files must be installed in the same folder as the executable!
    b. The execuable must be run as an Administrator!
10. Configure the app in the settings to fit your use case
11. Run the program!

For compiling and editing:
1. Follow steps 1-6 ...
2. Download and install Visual Studio 2022 Community
3. Naviagate the Installation directory which should be under C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120
4. Copy and paste everything in the ../include directory of _AugmentedIntelligence into the ../include directory of Visual Studio.
5. Open Visual Studio 2022 and the _AugmentedIntelligence.sln file
