import speech_commands

def main():
    # Create an instance of the C++ class
    speech_commands_instance = speech_commands._SpeechCommands()
    
    # Call the SpeechCommands function on the instance
    speech_commands_instance.SpeechCommands("simple text import transcription")
    speech_commands_instance.SpeechCommands("simple text why")

if __name__ == "__main__":
    main()