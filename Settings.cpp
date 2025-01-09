/*
	Copyright(C) 2025 Tyler Crockett | Macdaddy4sure.com

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
	//visual_reasoning = _Settings::GetVisualReasoningEnable();
	//visual_memory = _Settings::GetVisualMemoryEnable();
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
	//reading_fallacy_check = _Settings::GetReadingFallacyCheckEnable();
	//ffmpeg_location = _Settings::GetFFMpegLocation();
	//microphone1_enabled = _Settings::GetMicrophone1Enable();
	//microphone1_device = _Settings::GetMicrophone1Device();
	//microphone2_enable = _Settings::GetMicrophone2Enable();
	//microphone2_device = _Settings::GetMicrophone2Device();
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
	//mysql_speech_database = _Settings::GetMySQLSpeechDatabase();
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
		cout << "| 4. Enable/Disable Visual Memory                        |" << endl;
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
		cout << "| 15. Enable/Disable Visual Reasoning                    |" << endl;
		cout << "| 16. Enable/Disable Sound Reasoning                     |" << endl;
		cout << "| 17. Enable/Disable Reading Reasoning                   |" << endl;
		cout << "| 18. Enable/Disable Speech Reasoning                  |" << endl;
		cout << "| 19. Enable/Disable Camera 1                            |" << endl;
		cout << "| 20. Enable/Disable Camera 2                            |" << endl;
		cout << "| 21. Enable/Disable Microphone 1                        |" << endl;
		cout << "| 22. Enable/Disable Microphone 2                        |" << endl;
		cout << "| 23. Enable/Disable Speech Recognition                  |" << endl;
		cout << "| 24. Enable/Disable Computer Use                        |" << endl;
		cout << "| 25. Enable/Disable Computer Monitor Recognition        |" << endl;
		cout << "| 26. Enable/Disable Computer Owned Recognition          |" << endl;
		cout << "| 27. Enable/Disable Reading                             |" << endl;
		cout << "| 28. Enable/Disable Reading Fallacy Checking            |" << endl;
		cout << "| 29. Enable/Disable Listening Fallacy Checking          |" << endl;
		cout << "| 30. Enable/Disable Listening Bias Checking             |" << endl;
		cout << "| 31. Enable/Disable Listening Literature Device Checking|" << endl;
		cout << "| 32. Enable/Disable Listening Axiom Checking            |" << endl;
		cout << "| 33. Enable/Disable Listening Abuse Checking            |" << endl;
		cout << "| 34. Enable/Disable Listening Law Checking              |" << endl;
		cout << "| 35. Enable/Disable Listening Dictionary Checking       |" << endl;
		cout << "| 36. Set Visual Memory Directory                        |" << endl;
		cout << "| 37. Set Sound Memory Directory                         |" << endl;
		cout << "| 38. Set Working Memory Limit                           |" << endl;
		cout << "| 39. Set Working Memory Location                        |" << endl;
		cout << "| 40. Set Short Term Memory Limit                        |" << endl;
		cout << "| 41. Set Short Term Memory Directory                    |" << endl;
		cout << "| 42. Set Long Term Memory Limit                         |" << endl;
		cout << "| 43. Set Long Term Memory Directory                     |" << endl;
		cout << "| 44. Set CUDA Accelleration Remote Hostname             |" << endl;
		cout << "| 45. Set CUDA Accelleration Remote Cores                |" << endl;
		cout << "| 46. Set Tensor Accelleration Remote Hostname           |" << endl;
		cout << "| 47. Set Tensor Accelleration Remote Cores              |" << endl;
		cout << "| 48. FFmpeg Location                                    |" << endl;
		cout << "| 49. Tensorflow Saved Model Location                    |" << endl;
		cout << "| 50. Tensorflow Model Labels                            |" << endl;
		cout << "| 51. Whisper Model Location                             |" << endl;
		cout << "| 52. Set Camera 1 Device                                |" << endl;
		cout << "| 53. Set Camera 1 FPS                                   |" << endl;
		cout << "| 54. Set Camera 1 Resolution                            |" << endl;
		cout << "| 55. Set Camera 2 Device                                |" << endl;
		cout << "| 56. Set Camera 2 FPS                                   |" << endl;
		cout << "| 57. Set Camera 2 Resolution                            |" << endl;
		cout << "| 58. Set Microphone 1 Device Name                       |" << endl;
		cout << "| 59. Set Microphone 1 Device ID                         |" << endl;
		cout << "| 60. Set Microphone 2 Device Name                       |" << endl;
		cout << "| 61. Set Microphone 2 Device ID                         |" << endl;
		cout << "| 62. Set Sound Codec                                    |" << endl;
		cout << "| 63. Set Sound Bitrate                                  |" << endl;
		cout << "| 64. Set Sound Sample Rate                              |" << endl;
		cout << "| 65. Set Sound Channels                                 |" << endl;
		cout << "| 66. Set Sound Bits Per Channel                         |" << endl;
		cout << "| 67. Set Sound Recording Interval                       |" << endl;
		cout << "| 68. Speech Commands Activation Keyword                 |" << endl;
		cout << "| 69. Speech Commands Terminator Keyword                 |" << endl;
		cout << "| 70. Enable/Disable News Watching Scraper               |" << endl;
		cout << "| 71. Enable/Disable Actions Detction                    |" << endl;
		cout << "| 72. Enable/Disable Needs Detection                     |" << endl;
		cout << "| 73. Enable/Disable Navigation Detection                |" << endl;
		cout << "| 74. Enable/Disable Social Needs Detection              |" << endl;
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
		if (visual_memory)
			cout << "Visual Memory: True" << endl;
		else
			cout << "Visual Memory: False" << endl;
		if (sound_memory)
			cout << "Sound Memory: True" << endl;
		else
			cout << "Sound Memory: False" << endl;
		if (speech_memory)
			cout << "Speech Memory: True" << endl;
		else
			cout << "Speech Memory: False" << endl;
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
		if (visual_reasoning)
			cout << "Visual Reasoning: True" << endl;
		else
			cout << "Visual Reasoning: False" << endl;
		if (sound_reasoning)
			cout << "Sound Reasoning: True" << endl;
		else
			cout << "Sound Reasoning: False" << endl;
		if (reading_reasoning)
			cout << "Reading Reasoning: True" << endl;
		else
			cout << "Reading Reasoning: False" << endl;
		if (speech_reasoning)
			cout << "Speech Reasoing: True" << endl;
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
		if (computer_use)
			cout << "Computer Use: True" << endl;
		else
			cout << "Computer Use: False" << endl;
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
		if (reading_fallacy_check)
			cout << "Reading Fallacy Checking: True" << endl;
		else
			cout << "Reading Fallacy Checking: False" << endl;
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
		cout << "FFMpeg Location: " << ffmpeg_location << endl;
		cout << "Camera 1 Device: " << camera1 << endl;
		cout << "Camera 1 FPS: " << camera1_fps << endl;
		cout << "Camera 1 Resolution: " << camera1_resolution << endl;
		cout << "Camera 2 Device: " << camera2 << endl;
		cout << "Camera 2 FPS: " << camera2_fps << endl;
		cout << "Camera 2 Resolution: " << camera2_resolution << endl;
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

			_Settings::SaveSettingsFile();
		}
		else if (input == "2")
		{
			if (!short_term_memory_enabled)
				short_term_memory_enabled = true;
			else
				short_term_memory_enabled = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "3")
		{
			if (!long_term_memory_enabled)
				long_term_memory_enabled = true;
			else
				long_term_memory_enabled = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "4")
		{
			if (!visual_memory)
				visual_memory = true;
			else
				visual_memory = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "5")
		{
			if (!sound_memory)
				sound_memory = true;
			else
				sound_memory = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "6")
		{
			if (!speech_memory)
				speech_memory = true;
			else
				speech_memory = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "7")
		{
			if (!ethics_check_enabled)
				ethics_check_enabled = true;
			else
				ethics_check_enabled = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "8")
		{
			if (!cuda_accelleration)
				cuda_accelleration = true;
			else
				cuda_accelleration = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "9")
		{
			if (!cuda_accelleration_remote_enabled)
				cuda_accelleration_remote_enabled = true;
			else
				cuda_accelleration_remote_enabled = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "10")
		{
			if (!tensor_accelleration)
				tensor_accelleration = true;
			else
				tensor_accelleration = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "11")
		{
			if (!tensor_accelleration_remote_enabled)
				tensor_accelleration_remote_enabled = true;
			else
				tensor_accelleration_remote_enabled = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "12")
		{
			if (!vision_object_detection)
				vision_object_detection = true;
			else
				vision_object_detection = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "13")
		{
			if (!vision_object_detection_cuda)
				vision_object_detection_cuda = true;
			else
				vision_object_detection_cuda = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "14")
		{
			if (!vision_object_detection_server)
				vision_object_detection_server = true;
			else
				vision_object_detection_server = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "15")
		{
			if (!visual_reasoning)
				visual_reasoning = true;
			else
				visual_reasoning = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "16")
		{
			if (!sound_reasoning)
				sound_reasoning = true;
			else
				sound_reasoning = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "17")
		{
			if (!reading_reasoning)
				reading_reasoning = true;
			else
				reading_reasoning = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "18")
		{
			if (!speech_reasoning)
				speech_reasoning = true;
			else
				speech_reasoning = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "19")
		{
			if (!camera1_enabled)
				camera1_enabled = true;
			else
				camera1_enabled = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "20")
		{
			if (!camera2_enabled)
				camera2_enabled = true;
			else
				camera2_enabled = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "21")
		{
			if (!microphone1_enabled)
				microphone1_enabled = true;
			else
				microphone1_enabled = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "22")
		{
			if (!microphone2_enabled)
				microphone2_enabled = true;
			else
				microphone2_enabled = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "23")
		{
			if (!speech_recognition)
				speech_recognition = true;
			else
				speech_recognition = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "24")
		{
			if (!computer_use)
				computer_use = true;
			else
				computer_use = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "25")
		{
			if (!computer_monitor_recognition)
				computer_monitor_recognition = true;
			else
				computer_monitor_recognition = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "26")
		{
			if (!computer_owned_recognition)
				computer_owned_recognition = true;
			else
				computer_owned_recognition = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "27")
		{
			if (!reading)
				reading = true;
			else
				reading = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "28")
		{
			if (!reading_fallacy_check)
				reading_fallacy_check = true;
			else
				reading_fallacy_check = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "29")
		{
			if (!listening_fallacy_checking)
				listening_fallacy_checking = true;
			else
				listening_fallacy_checking = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "30")
		{
			if (!listening_bias_checking)
				listening_bias_checking = true;
			else
				listening_bias_checking = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "31")
		{
			if (!listening_literature_device_checking)
				listening_literature_device_checking = true;
			else
				listening_literature_device_checking = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "32")
		{
			if (!listening_axiom_checking)
				listening_axiom_checking = true;
			else
				listening_axiom_checking = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "33")
		{
			if (!listening_abuse_checking)
				listening_abuse_checking = true;
			else
				listening_abuse_checking = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "34")
		{
			if (!listening_law_checking)
				listening_law_checking = true;
			else
				listening_law_checking = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "35")
		{
			if (!listening_dictionary_checking)
				listening_dictionary_checking = true;
			else
				listening_dictionary_checking = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "36")
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
					_Settings::SaveSettingsFile();
					boolean2 = true;
				}
			}
		}
		else if (input == "37")
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
					_Settings::SaveSettingsFile();
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
				cout << "Working Memory Limit" << endl;
				cout << "Write in Megabytes with no units!" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					// Save the variable to working memory
					working_memory_limit = input2;
					_Settings::SaveSettingsFile();
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
				cout << "Working Memory Location" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					working_memory_location = input2;
					_Settings::SaveSettingsFile();
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
				cout << "Short Term Memory Limit" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					short_term_memory_limit = input2;
					_Settings::SaveSettingsFile();
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
				cout << "Short Term Memory Directory" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					short_term_memory_location = input2;
					_Settings::SaveSettingsFile();
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
				cout << "Long Term Memory Limit" << endl;
				cout << "Write in Megabytes with no units!" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					long_term_memory_limit = input2;
					_Settings::SaveSettingsFile();
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
				cout << "Long Term Memory Directory" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					long_term_memory_location = input2;
					_Settings::SaveSettingsFile();
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
				cout << "CUDA Accelleration Remote Hostname" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					cuda_accelleration_remote_hostname = input2;
					_Settings::SaveSettingsFile();
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
				cout << "CUDA Acclleration Remote Cores" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					cuda_accelleration_remote_cores = input2;
					_Settings::SaveSettingsFile();
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
				cout << "Tensor Accelleration Remote Hostname" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					tensor_accelleration_remote_hostname = input2;
					_Settings::SaveSettingsFile();
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
				cout << "Tensor Accelleration Remote Cores" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					tensor_accelleration_remote_cores = input2;
					_Settings::SaveSettingsFile();
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
				cout << "FFMPEG Location" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					ffmpeg_location = input2;
					_Settings::SaveSettingsFile();
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
				cout << "Tensorflow Saved Model Location" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					tensorflow_model = input2;
					_Settings::SaveSettingsFile();
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
				cout << "Tensorflow Saved Model Labels" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					tensorflow_labels = input2;
					_Settings::SaveSettingsFile();
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
				cout << "Whisper Model Location: " << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					whisper_model = input2;
					_Settings::SaveSettingsFile();
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
				cout << "Camera 1 Device" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					camera1 = input2;
					_Settings::SaveSettingsFile();
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
				cout << "Camera 1 FPS" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					camera1_fps = stoi(input2);
					_Settings::SaveSettingsFile();
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
				cout << "Camera 1 Resolution" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					camera1_resolution = input2;
					_Settings::SaveSettingsFile();
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
				cout << "Camera 2 Device" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					camera2 = input2;
					_Settings::SaveSettingsFile();
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
				cout << "Camera 2 FPS" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					camera2_fps = stoi(input2);
					_Settings::SaveSettingsFile();
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
				cout << "Camera 2 Resolution" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					camera2_resolution = input2;
					_Settings::SaveSettingsFile();
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
				cout << "Microphone 1 Device Name" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					microphone1_device_name = input2;
					_Settings::SaveSettingsFile();
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
				cout << "Microphone 1 Device ID" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					microphone1_device_id = stoi(input2);
					_Settings::SaveSettingsFile();
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
				cout << "Microphone 2 Device Name" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					microphone2_device_name = input2;
					_Settings::SaveSettingsFile();
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
				cout << "Microphone 2 Device ID" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					microphone2_device_id = stoi(input2);
					_Settings::SaveSettingsFile();
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
				cout << "Sound Codec" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					sound_codec = input2;
					_Settings::SaveSettingsFile();
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
				cout << "Sound Bitrate" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					sound_bitrate = input2;
					_Settings::SaveSettingsFile();
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
				cout << "Sound Sample Rate" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					sound_sample_rate = stoi(input2);
					_Settings::SaveSettingsFile();
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
				cout << "Sound Channels" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					sound_channels = stoi(input2);
					_Settings::SaveSettingsFile();
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
				cout << "Sound Bits Per Channel" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					sound_bits_per_sample = stoi(input2);
					_Settings::SaveSettingsFile();
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
				cout << "Sound Recording Interval" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					sound_recording_interval = stoi(input2);
					_Settings::SaveSettingsFile();
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
				cout << "Speech Commands Activation: " << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					speech_commands_activation = input2;
					_Settings::SaveSettingsFile();
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
				cout << "Speech Commands Terminator: " << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					speech_commands_terminator = input2;
					_Settings::SaveSettingsFile();
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

			_Settings::SaveSettingsFile();
		}
		else if (input == "71")
		{
			if (!action_detection)
				action_detection = true;
			else
				action_detection = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "72")
		{
			if (!speech_recognition)
				needs_detection = true;
			else
				needs_detection = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "73")
		{
			if (!navigation_detection)
				navigation_detection = true;
			else
				navigation_detection = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "74")
		{
			if (!social_needs_detection)
				social_needs_detection = true;
			else
				social_needs_detection = false;

			_Settings::SaveSettingsFile();
		}
		else if (input == "0")
		{
			_Settings::SaveSettingsFile();
			boolean = true;
		}
		else
			cout << "Invalid Entry..." << endl;
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
					_Settings::SaveSettingsFile();
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
					_Settings::SaveSettingsFile();
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
					_Settings::SaveSettingsFile();
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
					_Settings::SaveSettingsFile();
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
					_Settings::SaveSettingsFile();
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
					_Settings::SaveSettingsFile();
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
					_Settings::SaveSettingsFile();
				}
			}
		}
		else if (input == "0")
		{
			_Settings::SaveSettingsFile();
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
		cout << "MySQL Speech Database: " << mysql_speech_database << endl;
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
					_Settings::SaveSettingsFile();
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
					_Settings::SaveSettingsFile();
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
					_Settings::SaveSettingsFile();
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
					_Settings::SaveSettingsFile();
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
					_Settings::SaveSettingsFile();
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
					mysql_speech_database = input2;
					boolean2 = true;
					_Settings::SaveSettingsFile();
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
					_Settings::SaveSettingsFile();
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
					_Settings::SaveSettingsFile();
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
					_Settings::SaveSettingsFile();
				}
			}
		}
		if (input == "0")
		{
			_Settings::SaveSettingsFile();
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

		private_computer = _Settings::GetPrivateComputer();
		computer_username = _Settings::GetComputerUsername();
		computer_password = _Settings::GetComputerPassword();

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
		cout << "Computer Password: " << computer_password << endl;
		cout << endl;
		cout << "Your Selection: ";
		getline(cin, input);

		if (input == "1")
		{
			if (private_computer)
				private_computer = false;
			else
				private_computer = true;
			_Settings::SaveSettingsFile();
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
					_Settings::SaveSettingsFile();
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
					_Settings::SaveSettingsFile();
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
					_Settings::SaveSettingsFile();
				}
			}
		}
		else if (input == "0")
		{
			_Settings::SaveSettingsFile();
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
					_Settings::SaveSettingsFile();
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
					_Settings::SaveSettingsFile();
				}
			}
		}
		else if (input == "3")
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
					_Settings::SaveSettingsFile();
				}
			}
		}
		else if (input == "4")
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
					_Settings::SaveSettingsFile();
				}
			}
		}
		else if (input == "5")
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
					_Settings::SaveSettingsFile();
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
		//			_Settings::SaveSettingsFile();
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
		//			_Settings::SaveSettingsFile();
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
		//			_Settings::SaveSettingsFile();
		//		}
		//	}
		//}
		else if (input == "0")
		{
			_Settings::SaveSettingsFile();
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

		cout << endl;
		cout << "LLM Server Settings" << endl;
		cout << "1. Server Hostname" << endl;
		cout << "2. Server Username" << endl;
		cout << "3. Server Password" << endl;
		cout << "-------------------------------------" << endl;
		cout << "0. Main Menu" << endl;
		cout << endl;
		cout << "LLM Server Settings" << endl;
		cout << "LLM Hostname: " << llm_hostname << endl;
		cout << "LLM Username: " << llm_username << endl;
		cout << "LLM Password: " << llm_password << endl;
		cout << endl;
		cout << "Your Selection: ";
		getline(cin, input);

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
					_Settings::SaveSettingsFile();
				}
			}
		}
		else if (input == "2")
		{
			while (!boolean2)
			{
				system("cls");

				cout << "LLM Server Username" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					llm_username = input2;
					boolean2 = true;
					_Settings::SaveSettingsFile();
				}
			}
		}
		else if (input == "3")
		{
			while (!boolean2)
			{
				system("cls");

				cout << "LLM Server Password" << endl;
				cout << endl;
				cout << "Your Selection: ";
				getline(cin, input2);

				if (input2 != "")
				{
					llm_password = input2;
					boolean2 = true;
					_Settings::SaveSettingsFile();
				}
			}
		}
		else if (input == "0")
		{
			_Settings::SaveSettingsFile();
			boolean = true;
		}
		else
		{
			cout << "Invalid Options..." << endl;
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

string _Settings::GetCamera1FPS()
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
					return temp;
				}
			}
		}
	}
	return temp;
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

string _Settings::GetCamera2FPS()
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
					return temp;
				}
			}
		}
	}
	return temp;
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

string _Settings::GetMicrophone1Device()
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
					return temp;
				}
			}
		}
	}
	return temp;
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

string _Settings::GetMicrophone2Device()
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
					return temp;
				}
			}
		}
	}
	return temp;
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
		if (visual_reasoning)
		settings << "visual_reasoning=True" << endl;
		else
		settings << "visual_reasoning=False" << endl;
		if (visual_memory)
		settings << "visual_memory=True" << endl;
		else
		settings << "visual_memory=False" << endl;
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
		if (reading_fallacy_check)
			settings << "reading_fallacy_check=True" << endl;
		else
			settings << "reading_fallacy_check=False" << endl;
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
		settings << "mysql_speech_database=" << mysql_speech_database << endl;
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
	MYSQL* normal_settings;
	MYSQL* conn2;
	MYSQL* conn3;
	MYSQL* ftp_settings;
	MYSQL* mysql_settings;
	MYSQL* computer_settings;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_hostname = _Settings::GetMySQLHostname();
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string normal_settings_array[] = { "terms_conditions", "cuda_accelleration", "cuda_accelleration_remote_enabled", "cuda_accelleration_remote_hostname", "cuda_accelleration_remote_cores", "tensor_accelleration", "tensor_accelleration_remote_enabled", "tensor_accelleration_remote_hostname", "tensor_accelleration_remote_cores", "working_memory_enabled", "working_memory_limit", "short_term_memory_enabled", "short_term_memory_limit", "long_term_memory_enabled", "long_term_memory_limit", "speech_memory_enabled", "vision_object_detection", "vision_object_detection_cuda", "vision_object_detection_server", "vision_object_detection_server_hostname", "visual_reasoning", "visual_memory", "vision_memory_directory", "camera1", "camera1_enabled", "camera1_fps", "camera1_resolution", "camera2", "camera2_enabled", "camera2_fps", "camera2_resolution", "computer_use", "computer_monitor_recognition", "reading", "reading_fallacy_check", "sound_memory", "speech_memory", "speech_recognition", "ethics_check_enabled", "sound_directory", "sound_codec", "sound_bitrate", "speech_directory", "speech_recognition_enable", "speech_lie_detection", "short_term_memory_time", "sound_memory", "vision_object_detection_remote_enabled", "microphone1_enabledd", "microphone1_device_name", "microphone2_enabled", "microphone2_device_name", "computer_owned_recognition", "ffmpeg_location", "microphone1_enabled", "microphone1_device", "microphone2_enable", "microphone2_device", "sound_reasoning", "reading_reasoning", "speech_reasoning", "working_memory_location", "short_term_memory_location", "long_term_memory_location", "news_watching", "action_commands", "action_detection", "needs_detection", "navigation_detection", "social_needs_detection" };
	string ftp_settings_array[] = { "ftp_enabled", "ftp_hostname", "ftp_username", "ftp_password", "ftp_vision_directory", "ftp_sound_directory", "ftp_vision_storage_limit", "ftp_sound_storage_limit" };
	string mysql_settings_array[] = { "mysql_hostname", "mysql_username", "mysql_password", "mysql_vision_database", "mysql_sound_database", "mysql_speech_database", "mysql_working_memory_database", "mysql_short_term_memory_database", "mysql_long_term_memory_database" };
	string computer_settings_array[] = { "private_computer", "computer_hostname", "computer_username", "computer_password" };
	string rows[] = { "setting TEXT", "value TEXT" };
	string setting;
	string value;

	conn3 = mysql_init(0);
	conn3 = mysql_real_connect(conn3, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	if (conn3)
	{
		_DatabaseFunctions::DropTable(mysql_database, "settings");
		_DatabaseFunctions::CreateTable(mysql_database, "settings", rows);

		for (int x = 0; x <= sizeof(normal_settings_array); x++)
		{
			sql1 = "INSERT INTO settings(setting, value) VALUES(\"";
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
				if (visual_reasoning)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			else if (x == 21)
			{
				if (visual_memory)
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
				if (reading_fallacy_check)
					sql1 += "true";
				else
					sql1 += "false";
				sql1 += "\");";
				//cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
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
			sql1 = "INSERT INTO ftp_settings(setting, value) VALUES(\"";
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
			sql1 = "INSERT INTO mysql_settings(setting, value) VALUES(\"";
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
				if (mysql_speech_database == "")
					sql1 += "NULL";
				else
				{
					sql1 += mysql_speech_database;
				}
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
		_DatabaseFunctions::DropTable(mysql_database, "mysql_settings");
		_DatabaseFunctions::CreateTable(mysql_database, "mysql_settings", rows);

		for (int x = 0; x <= 4; x++)
		{
			sql1 = "INSERT INTO mysql_settings(setting, value) VALUES(\"";
			sql1 += mysql_settings_array[x];
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