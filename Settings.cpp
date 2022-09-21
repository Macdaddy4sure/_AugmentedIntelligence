/*
	Copyright(C) 2022 Tyler Crockett | Macdaddy4sure.com

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

#include "AugmentedIntelligence.h"
#include "Variables.h"
#include "Settings.h"
#include "Utilities.h"

using namespace std;

void _Settings::Settings()
{
	MYSQL* conn;
	string input;
	string input2;

	bool boolean = false;
	bool boolean2 = false;

	// General Settings
	terms_conditions = _Settings::GetTermsConditions();
	working_memory_enabled = _Settings::GetWorkingMemoryEnable();
	working_memory_limit = _Settings::GetWorkingMemoryLimit();
	short_term_memory_enabled = _Settings::GetShortTermMemoryEnabled();
	short_term_memory_time = _Settings::GetShortTermMemoryTime();
	long_term_memory_enabled = _Settings::GetLongTermMemoryEnabled();
	long_term_memory_limit = _Settings::GetLongTermMemoryLimit();
	sound_memory_enabled = _Settings::GetSoundMemoryEnable();
	speech_memory_enabled = _Settings::GetSpeechMemoryEnabled();
	speech_recognition = _Settings::GetSpeechRecognitionEnable();
	speech_lie_detection = _Settings::GetSpeechLieDetectionEnabled();
	sound_directory = _Settings::GetSoundDirectory();
	sound_codec = _Settings::GetSoundCodec();
	sound_bitrate = _Settings::GetSoundBitrate();
	speech_directory = _Settings::GetSpeechDirectory();
	ethics_check_enabled = _Settings::GetEthicsCheckEnable();
	cuda_accelleration = _Settings::GetCUDAAccellerationEnable();
	cuda_accelleration_remote_enabled = _Settings::GetCUDAAccellerationRemoteEnable();
	cuda_accelleration_remote_hostname = _Settings::GetCUDAAccellerationRemoteHostname();
	cuda_accelleration_remote_cores = _Settings::GetCUDAAccellerationRemoteCores();
	tensor_accelleration = _Settings::GetTensorAccelleration();
	tensor_accelleration_remote_enabled = _Settings::GetTensorAccellerationRemoteEnabled();
	tensor_accelleration_remote_hostname = _Settings::GetTenorAccellerationRemoteHostname();
	tensor_accelleration_remote_cores = _Settings::GetTensorAccellerationRemoteCores();
	vision_object_detection = _Settings::GetObjectDetectionEnable();
	vision_object_detection_cuda = _Settings::GetObjectDetectionCUDAEnabled();
	vision_object_detection_remote_enabled = _Settings::GetObjectDetectionRemoteEnabled();
	vision_object_detection_server_hostname = _Settings::GetObjectDetectionRemoteHostname();
	visual_reasoning = _Settings::GetVisualReasoningEnable();
	visual_memory = _Settings::GetVisualMemoryEnable();
	vision_memory_directory = _Settings::GetVisionDirectory();
	camera1_enabled = _Settings::GetCamera1Enable();
	camera1 = _Settings::GetCamera1();
	camera1_fps = _Settings::GetCamera1FPS();
	camera1_resolution = _Settings::GetCamera1Resolution();
	camera2_enabled = _Settings::GetCamera2Enable();
	camera2 = _Settings::GetCamera2();
	camera2_fps = _Settings::GetCamera2FPS();
	camera2_resolution = _Settings::GetCamera2Resolution();
	computer_use = _Settings::GetComputerUseEnable();
	computer_monitor_recognition = _Settings::GetComputerMonitorRecognitionEnabled();
	computer_owned_recognition = _Settings::GetComputerOwnedRecognitionEnabled();
	reading = _Settings::GetReadingEnable();
	reading_fallacy_check = _Settings::GetReadingFallacyCheckEnable();
	ffmpeg_location = _Settings::GetFFMpegLocation();
	microphone1_enable = _Settings::GetMicrophone1Enable();
	microphone1_device = _Settings::GetMicrophone1Device();
	microphone2_enable = _Settings::GetMicrophone2Enable();
	microphone2_device = _Settings::GetMicrophone2Device();
	news_watching = _Settings::GetNewsWatchingEnable();
	actions_watching = _Settings::GetActionWatchingEnable();
	needs_detection = _Settings::GetNeedsWatchingEnable();
	navigation_detection = _Settings::GetNavigationDetectionEnable();
	social_needs_detection = _Settings::GetSocialNeedsDetectionEnable();

	// MySQL Settings
	mysql_hostname = _Settings::GetMySQLHostname();
	mysql_username = _Settings::GetMySQLUsername();
	mysql_password = _Settings::GetMySQLPassword();
	mysql_vision_database = _Settings::GetMySQLVisionDatabase();
	mysql_sound_database = _Settings::GetMySQLSoundDatabase();
	mysql_speech_database = _Settings::GetMySQLSpeechDatabase();
	mysql_working_memory_database = _Settings::GetMySQLWorkingMemoryDatabase();
	mysql_short_term_memory_database = _Settings::GetMySQLShortTermMemoryDatabase();
	mysql_long_term_memory_database = _Settings::GetMySQLLongTermMemoryDatabase();

	// Computer Settings
	private_computer = _Settings::GetPrivateComputer();
	computer_hostname = _Settings::GetComputerHostname();
	computer_username = _Settings::GetComputerUsername();
	computer_password = _Settings::GetComputerPassword();

	// FTP Settings
	ftp_enabled = _Settings::GetFTPEnabled();
	ftp_hostname = _Settings::GetFTPHostname();
	ftp_username = _Settings::GetFTPUsername();
	ftp_password = _Settings::GetFTPPassword();
	ftp_vision_directory = _Settings::GetVisionFTPDirectory();
	ftp_sound_directory = _Settings::GetSoundFTPDirectory();

	while (!boolean)
	{
		system("cls");

		conn = mysql_init(0);
		conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), NULL, 3306, NULL, 0);

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
		cout << "| 13. Enable Disable Object Detection CUDA               |" << endl;
		cout << "| 14. Enable/Disable Object Detection Remote             |" << endl;
		cout << "| 15. Enable/Disable Visual Reasoning                    |" << endl;
		cout << "| 16. Enable/Disable Sound Reasoning                     |" << endl;
		cout << "| 17. Enable/Disable Reading Reasoning                   |" << endl;
		cout << "| 18. Enable/Disable Speaking Reasoning                  |" << endl;
		cout << "| 19. Enable/Disable Camera 1                            |" << endl;
		cout << "| 20. Enable/Disable Camera 2                            |" << endl;
		cout << "| 21. Enable/Disable Microphone 1                        |" << endl;
		cout << "| 22. Enable/Disable Microphone 2                        |" << endl;
		cout << "| 23. Enable/Disable Speech Recognition                  |" << endl;
		cout << "| 24. Enable/Disable Computer Use                        |" << endl;
		cout << "| 25. Enable/Disable Computer Monitor Recognition        |" << endl;
		cout << "| 26. Enable/Disable Computer Owned Recognition          |" << endl;
		cout << "| 27. Enable/Disable Reading                             |" << endl;
		cout << "| 28. Enable/Disable Fallacy Checking                    |" << endl;
		cout << "| 29. Set Visual Memory Directory                        |" << endl;
		cout << "| 30. Set Sound Memory Directory                         |" << endl;
		cout << "| 31. Set Working Memory Limit                           |" << endl;
		cout << "| 32. Set Working Memory Location                        |" << endl;
		cout << "| 33. Set Short Term Memory Limit                        |" << endl;
		cout << "| 34. Set Short Term Memory Directory                    |" << endl;
		cout << "| 35. Set Long Term Memory Limit                         |" << endl;
		cout << "| 36. Set Long Term Memory Directory                     |" << endl;
		cout << "| 37. Set CUDA Accelleration Remote Hostname             |" << endl;
		cout << "| 38. Set CUDA Accelleration Remote Cores                |" << endl;
		cout << "| 39. Set Tensor Accelleration Remote Hostname           |" << endl;
		cout << "| 40. Set Tensor Accelleration Remote Cores              |" << endl;
		cout << "| 41. Set FFMPEG Location                                |" << endl;
		cout << "| 42. Set Camera 1 Device                                |" << endl;
		cout << "| 43. Set Camera 1 FPS                                   |" << endl;
		cout << "| 44. Set Camera 1 Resolution                            |" << endl;
		cout << "| 45. Set Camera 2 Device                                |" << endl;
		cout << "| 46. Set Camera 2 FPS                                   |" << endl;
		cout << "| 47. Set Camera 2 Resolution                            |" << endl;
		cout << "| 48. Set Microphone 1 Device                            |" << endl;
		cout << "| 49. Set Microphone 2 Device                            |" << endl;
		cout << "| 50. Set Sound Codec                                    |" << endl;
		cout << "| 51. Set Sound Bitrate                                  |" << endl;
		cout << "| 52. Enable/Disable News Watching Scraper               |" << endl;
		cout << "| 53. Enable/Disable Actions Detction                    |" << endl;
		cout << "| 54. Enable/Disable Needs Detection                     |" << endl;
		cout << "| 55. Enable/Disable Navigation Detection                |" << endl;
		cout << "| 56. Enable/Disable Social Needs Detection              |" << endl;
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
		if (speaking_reasoning)
			cout << "Speaking Reasoing: True" << endl;
		else
			cout << "Speaking Reasoning: False" << endl;
		if (camera1_enabled)
			cout << "Camera 1 Enabled: True" << endl;
		else
			cout << "Camera 1 Enabled: False" << endl;
		if (camera2_enabled)
			cout << "Camera 2 Enabled: True" << endl;
		else
			cout << "Camera 2 Enabled: False" << endl;
		if (microphone1_enable)
			cout << "Microphone 1 Enabled: True" << endl;
		else
			cout << "Microphone 1 Enabled: False" << endl;
		if (microphone2_enable)
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
			cout << "Fallacy Checking: True" << endl;
		else
			cout << "Fallacy Checking: False" << endl;
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
		cout << "FFMpeg Location: " << ffmpeg_location << endl;
		cout << "Camera 1 Device: " << camera1 << endl;
		cout << "Camera 1 FPS: " << camera1_fps << endl;
		cout << "Camera 1 Resolution: " << camera1_resolution << endl;
		cout << "Camera 2 Device: " << camera2 << endl;
		cout << "Camera 2 FPS: " << camera2_fps << endl;
		cout << "Camera 2 Resolution: " << camera2_resolution << endl;
		cout << "Microphone 1 Device: " << microphone1_device_name << endl;
		cout << "Microphone 2 Device: " << microphone2_device_name << endl;
		cout << "Sound Codec: " << sound_codec << endl;
		cout << "Sound Bitrate: " << sound_bitrate << " Kb/s" << endl;
		if (news_watching)
			cout << "News Watching: True" << endl;
		else
			cout << "News Watching: False" << endl;
		if (actions_watching)
			cout << "Actions Watching: True" << endl;
		else
			cout << "Actions Watching: False" << endl;
		if (needs_detection)
			cout << "Needs Detection: True" << endl;
		else
			cout << "Needs Detection: False" << endl;
		if (navigation_detection)
			cout << "Navigation Detection: True" << endl;
		else
			cout << "Navigation Detection: false" << endl;
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
			if (!visual_memory)
				visual_memory = true;
			else
				visual_memory = false;

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
			if (!sound_memory)
				sound_memory = true;
			else
				sound_memory = false;

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
			if (!visual_reasoning)
				visual_reasoning = true;
			else
				visual_reasoning = false;

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
			if (!speaking_reasoning)
				speaking_reasoning = true;
			else
				speaking_reasoning = false;

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
			if (!microphone1_enable)
				microphone1_enable = true;
			else
				microphone1_enable = false;

			_Settings::SaveSettings();
		}
		else if (input == "22")
		{
			if (!microphone2_enable)
				microphone2_enable = true;
			else
				microphone2_enable = false;

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
			if (!computer_use)
				computer_use = true;
			else
				computer_use = false;

			_Settings::SaveSettings();
		}
		else if (input == "25")
		{
			if (!computer_monitor_recognition)
				computer_monitor_recognition = true;
			else
				computer_monitor_recognition = false;

			_Settings::SaveSettings();
		}
		else if (input == "26")
		{
			if (!computer_owned_recognition)
				computer_owned_recognition = true;
			else
				computer_owned_recognition = false;

			_Settings::SaveSettings();
		}
		else if (input == "27")
		{
			if (!reading)
				reading = true;
			else
				reading = false;

			_Settings::SaveSettings();
		}
		else if (input == "28")
		{
			if (!reading_fallacy_check)
				reading_fallacy_check = true;
			else
				reading_fallacy_check = false;

			_Settings::SaveSettings();
		}
		else if (input == "29")
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
		else if (input == "30")
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
		else if (input == "31")
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
		else if (input == "32")
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
		else if (input == "33")
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
		else if (input == "34")
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
		else if (input == "35")
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
		else if (input == "36")
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
		else if (input == "37")
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
		else if (input == "38")
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
		else if (input == "39")
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
		else if (input == "40")
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
		else if (input == "41")
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
		else if (input == "42")
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
		else if (input == "43")
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
					camera1_fps = input2;
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
		else if (input == "45")
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
		else if (input == "46")
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
					camera2_fps = input2;
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
		else if (input == "48")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Microphone 1 Device" << endl;
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
		else if (input == "49")
		{
			while (!boolean2)
			{
				system("cls");

				cout << endl;
				cout << "Microphone 2 Device" << endl;
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
		else if (input == "50")
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
		else if (input == "51")
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
		else if (input == "52")
		{
			if (!news_watching)
				news_watching = true;
			else
				news_watching = false;

			_Settings::SaveSettings();
		}
		else if (input == "53")
		{
			if (!action_detection)
				action_detection = true;
			else
				action_detection = false;

			_Settings::SaveSettings();
		}
		else if (input == "54")
		{
			if (!speech_recognition)
				needs_detection = true;
			else
				needs_detection = false;

			_Settings::SaveSettings();
		}
		else if (input == "55")
		{
			if (!navigation_detection)
				navigation_detection = true;
			else
				navigation_detection = false;

			_Settings::SaveSettings();
		}
		else if (input == "56")
		{
			if (!social_needs_detection)
				social_needs_detection = true;
			else
				social_needs_detection = false;

			_Settings::SaveSettings();
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

bool _Settings::GetTermsConditions()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	 //cout << "mysql_username: " << mysql_username << endl;
	// cout << "mysql_password: " << mysql_password << endl;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "terms_conditions")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetObjectDetectionEnable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	 //cout << "mysql_username: " << mysql_username << endl;
	// cout << "mysql_password: " << mysql_password << endl;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "vision_object_detection")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetVisualMemoryEnable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	 //cout << "mysql_username: " << mysql_username << endl;
	// cout << "mysql_password: " << mysql_password << endl;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "visual_memory")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetSoundMemoryEnable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	 //cout << "mysql_username: " << mysql_username << endl;
	// cout << "mysql_password: " << mysql_password << endl;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "sound_memory")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetSpeechRecognitionEnable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	 //cout << "mysql_username: " << mysql_username << endl;
	// cout << "mysql_password: " << mysql_password << endl;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "speech_recognition_enable")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetSpeechLieDetection()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	 //cout << "mysql_username: " << mysql_username << endl;
	// cout << "mysql_password: " << mysql_password << endl;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "speech_lie_detection")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetVisualReasoningEnable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "visual_reasoning")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetComputerUseEnable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "computer_use")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetReadingFallacyCheckEnable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "reading_fallacy_check")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetEthicsCheckEnable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "ethics_check_enabled")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetGPUAccellerationEnable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "cuda_accelleration")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

string _Settings::GetMySQLHostname()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM mysql_settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "mysql_hostname")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetMySQLUsername()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = "root";
	string mysql_password = "Anaheim92801%";
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM mysql_settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "mysql_username")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetMySQLPassword()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	//string mysql_username = _Settings::GetMySQLUsername();
	//string mysql_password = _Settings::GetMySQLPassword();
	string mysql_username = "root";
	string mysql_password = "Anaheim92801%";
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM mysql_settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "mysql_password")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetCamera1()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "camera1")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

bool _Settings::GetCamera1Enable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "camera1_enabled")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

string _Settings::GetCamera2()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "camera2")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

bool _Settings::GetCamera2Enable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "camera2_enabled")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

string _Settings::GetVisionDirectory()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "vision_memory_directory")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetSoundDirectory()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "sound_directory")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetSpeechDirectory()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "speech_directory")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetVideoFrameRate()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "camera1_fps")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetShortTermMemoryTime()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "short_term_memory_time")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
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
			cout << "FTP Enabled: False" << endl;
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
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "ftp_enabled")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

string _Settings::GetFTPHostname()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "ftp_hostname")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetFTPUsername()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "ftp_username")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetFTPPassword()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "ftp_password")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetVisionFTPDirectory()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];
			//value_int = stoi(value.c_str());

			if (setting == "ftp_vision_directory")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetSoundFTPDirectory()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "ftp_sound_directory")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetVisionStorageLimit()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];
			//value_int = stoi(value);

			if (setting == "long_term_memory_limit")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetSoundStorageLimit()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];
			//value_int = stoi(value);

			if (setting == "mysql_hostname")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
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
					mysql_speech_database = input2;
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
			cout << "Privately Owned: False" << endl;
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

bool _Settings::GetSoundMemoryEnabled()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "sound_memory_enabled")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

string _Settings::GetCUDAAccellerationRemoteHostname()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "cuda_accelleration_remote_hostname")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetWorkingMemoryLimit()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "working_memory_limit")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetShortTermMemoryLimit()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "short_term_memory_time")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

bool _Settings::GetObjectDetectionRemoteEnabled()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "vision_object_detection_remote_enabled")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

string _Settings::GetObjectDetectionRemoteHostname()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "vision_object_detection_server_hostname")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetCamera1FPS()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "camera1_fps")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetCamera1Resolution()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "camera1_resolution")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetCamera2FPS()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "camera2_fps")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetCamera2Resolution()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "camera2_resolution")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

bool _Settings::GetComputerUseEnabled()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "computer_use")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetCUDAAccellerationEnable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "cuda_accelleration")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetCUDAAccellerationRemoteEnable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "cuda_accelleration_remote_enabled")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

string _Settings::GetGPUAccellerationRemoteHostname()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "cuda_accelleration_remote_hostname")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
}

bool _Settings::GetSpeechLieDetectionEnabled()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "speech_lie_detection")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetComputerMonitorRecognitionEnable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "computer_monitor_recognition")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetComputerOwnedRecognitionEnabled()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "computer_owned_recognition")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetMicrophone1Enable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "microphone1_enable")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

string _Settings::GetMicrophone1Device()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "microphone1_device")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

bool _Settings::GetMicrophone2Enable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "microphone2_enable")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

string _Settings::GetMicrophone2Device()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "microphone2_device")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

bool _Settings::GetCUDAAcellerationEnable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "cuda_accelleration")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

string _Settings::GetCUDAAccelerationRemoteHostname()
{
	fstream ftp_settings;
	string input;
	string ftp_vision_directory;

	ftp_settings.open("ftp_settings.cfg");

	while (getline(ftp_settings, input))
	{
		// Check for mysql_username
		for (int x = 0; x < input.length(); x++)
		{
			if (input[x] == 'f' && input[x + 1] == 't' && input[x + 2] == 'p' && input[x + 3] == '_' && input[x + 4] == 'v' && input[x + 5] == 'i' && input[x + 6] == 's' && input[x + 7] == 'i' && input[x + 8] == 'o' && input[x + 9] == 'n' && input[x + 10] == '_' && input[x + 11] == 'd' && input[x + 12] == 'i' && input[x + 13] == 'r' && input[x + 14] == 'e' && input[x + 15] == 'c' && input[x + 16] == 't' && input[x + 17] == 'o' && input[x + 18] == 'r' && input[x + 19] == 'y')
			{
				for (int y = x + 21; y < input.length(); y++)
				{
					if (input[y] == '\"')
					{
						for (int z = y + 1; input[z] != '\"'; z++)
						{
							ftp_vision_directory += input[z];
						}
						return ftp_vision_directory;
					}
				}
			}
		}
	}
	return ftp_vision_directory;
}

bool _Settings::GetLongTermMemoryEnabled()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "long_term_memory_enabled")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

string _Settings::GetLongTermMemoryLimit()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "long_term_memory_limit")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

bool _Settings::GetReadingEnable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "reading")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

string _Settings::GetFFMpegLocation()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "ffmpeg_location")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetCUDAAccellerationRemoteCores()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "cuda_accelleration_remote_cores")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetTenorAccellerationRemoteHostname()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];
			//value_int = stoi(value.c_str());

			if (setting == "tensor_accelleration_remote_hostname")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

bool _Settings::GetComputerMonitorRecognitionEnabled()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "computer_monitor_recognition")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetTensorAccelleration()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "tensor_accelleration")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetTensorAccellerationRemoteEnabled()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "tensor_accelleration_remote_enabled")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

string _Settings::GetTensorAccellerationRemoteHostname()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];
			//value_int = stoi(value);

			if (setting == "tensor_accelleration_remote_hostname")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
}

string _Settings::GetTensorAccellerationRemoteCores()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "tensor_accelleration_remote_cores")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

bool _Settings::GetWorkingMemoryEnabled()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "working_memory_enabled")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetSpeechMemoryEnabled()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "speech_memory")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
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
//	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
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
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "smart_phone_recognition")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetWorkingMemoryEnable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "working_memory_enabled")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetShortTermMemoryEnabled()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "short_term_memory_enabled")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetEthicsCheckEnabled()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "ethics_check_enabled")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

string _Settings::GetTensorRemoteCores()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];
			//value_int = stoi(value);

			if (setting == "tensor_accelleration_remote_cores")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
}

bool _Settings::GetObjectDetectionCUDAEnabled()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	 //cout << "mysql_username: " << mysql_username << endl;
	// cout << "mysql_password: " << mysql_password << endl;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "vision_object_detection_cuda")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

string _Settings::GetSoundCodec()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];
			//value_int = stoi(value.c_str());

			if (setting == "sound_codec")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetSoundBitrate()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];
			//value_int = stoi(value.c_str());

			if (setting == "sound_bitrate")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetMySQLVisionDatabase()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM mysql_settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];
			//value_int = stoi(value.c_str());

			if (setting == "mysql_vision_database")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetMySQLSoundDatabase()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM mysql_settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];
			//value_int = stoi(value.c_str());

			if (setting == "mysql_sound_database")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetMySQLSpeechDatabase()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM mysql_settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];
			//value_int = stoi(value.c_str());

			if (setting == "mysql_speech_database")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetMySQLWorkingMemoryDatabase()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM mysql_settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];
			//value_int = stoi(value.c_str());

			if (setting == "mysql_working_memory_database")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetMySQLShortTermMemoryDatabase()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM mysql_settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];
			//value_int = stoi(value.c_str());

			if (setting == "mysql_short_term_memory_database")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetMySQLLongTermMemoryDatabase()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM mysql_settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];
			//value_int = stoi(value.c_str());

			if (setting == "mysql_long_term_memory_database")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

bool _Settings::GetPrivateComputer()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	//cout << "mysql_username: " << mysql_username << endl;
   // cout << "mysql_password: " << mysql_password << endl;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM computer_settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "private_computer")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

string _Settings::GetComputerHostname()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM computer_settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];
			//value_int = stoi(value.c_str());

			if (setting == "computer_hostname")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

string _Settings::GetComputerUsername()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM computer_settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];
			//value_int = stoi(value.c_str());

			if (setting == "computer_username")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

bool _Settings::GetNewsWatchingEnable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	//cout << "mysql_username: " << mysql_username << endl;
   // cout << "mysql_password: " << mysql_password << endl;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "news_watching")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetActionWatchingEnable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	//cout << "mysql_username: " << mysql_username << endl;
   // cout << "mysql_password: " << mysql_password << endl;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "actions_detection")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetNeedsWatchingEnable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	//cout << "mysql_username: " << mysql_username << endl;
   // cout << "mysql_password: " << mysql_password << endl;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "needs_detection")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetNavigationDetectionEnable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	//cout << "mysql_username: " << mysql_username << endl;
   // cout << "mysql_password: " << mysql_password << endl;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "navigation_watching")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

bool _Settings::GetSocialNeedsDetectionEnable()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	string temp;

	//cout << "mysql_username: " << mysql_username << endl;
   // cout << "mysql_password: " << mysql_password << endl;

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];

			if (setting == "social_needs_detection")
			{
				if (value == "TRUE" || value == "True" || value == "true")
				{
					mysql_close(conn);
					return true;
				}
				else if (value == "FALSE" || value == "False" || value == "false")
				{
					mysql_close(conn);
					return false;
				}
			}
		}
	}
	mysql_close(conn);
	return false;
}

string _Settings::GetComputerPassword()
{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* result;
	string sql1;
	string mysql_database = "ai_settings";
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string setting;
	string value;
	

	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	sql1 = "SELECT * FROM computer_settings;";
	mysql_query(conn, sql1.c_str());
	result = mysql_store_result(conn);

	if (conn)
	{
		while (row = mysql_fetch_row(result))
		{
			setting = row[0];
			value = row[1];
			//value_int = stoi(value.c_str());

			if (setting == "computer_password")
			{
				mysql_close(conn);
				return value;
			}
		}
	}
	mysql_close(conn);
	return value;
}

//bool _Settings::GetNeedsDetectionEnabled()
//{
//	string mysql_username = _Settings::GetMySQLUsername();
//	string mysql_password = _Settings::GetMySQLPassword();
//	return false;
//}

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
	string mysql_username = _Settings::GetMySQLUsername();
	string mysql_password = _Settings::GetMySQLPassword();
	string normal_settings_array[] = { "terms_conditions", "cuda_accelleration", "cuda_accelleration_remote_enabled", "cuda_accelleration_remote_hostname", "cuda_accelleration_remote_cores", "tensor_accelleration", "tensor_accelleration_remote_enabled", "tensor_accelleration_remote_hostname", "tensor_accelleration_remote_cores", "working_memory_enabled", "working_memory_limit", "short_term_memory_enabled", "short_term_memory_limit", "long_term_memory_enabled", "long_term_memory_limit", "speech_memory_enabled", "vision_object_detection", "vision_object_detection_cuda", "vision_object_detection_server", "vision_object_detection_server_hostname", "visual_reasoning", "visual_memory", "vision_memory_directory", "camera1", "camera1_enabled", "camera1_fps", "camera1_resolution", "camera2", "camera2_enabled", "camera2_fps", "camera2_resolution", "computer_use", "computer_monitor_recognition", "reading", "reading_fallacy_check", "sound_memory", "speech_memory", "speech_recognition", "ethics_check_enabled", "sound_directory", "sound_codec", "sound_bitrate", "speech_directory", "speech_recognition_enable", "speech_lie_detection", "short_term_memory_time", "sound_memory_enabled", "vision_object_detection_remote_enabled", "microphone1_enabled", "microphone1_device_name", "microphone2_enabled", "microphone2_device_name", "computer_owned_recognition", "ffmpeg_location", "microphone1_enable", "microphone1_device", "microphone2_enable", "microphone2_device", "sound_reasoning", "reading_reasoning", "speaking_reasoning", "working_memory_location", "short_term_memory_location", "long_term_memory_location", "news_watching", "actions_watching", "action_detection", "needs_detection", "navigation_detection", "social_needs_detection" };
	string ftp_settings_array[] = { "ftp_enabled", "ftp_hostname", "ftp_username", "ftp_password", "ftp_vision_directory", "ftp_sound_directory", "ftp_vision_storage_limit", "ftp_sound_storage_limit" };
	string mysql_settings_array[] = { "mysql_hostname", "mysql_username", "mysql_password", "mysql_vision_database", "mysql_sound_database", "mysql_speech_database", "mysql_working_memory_database", "mysql_short_term_memory_database", "mysql_long_term_memory_database" };
	string computer_settings_array[] = { "private_computer", "computer_hostname", "computer_username", "computer_password" };
	string setting;
	string value;

	normal_settings = mysql_init(0);
	normal_settings = mysql_real_connect(normal_settings, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	if (normal_settings)
	{
		sql1 = "DROP TABLE settings;";
		mysql_query(normal_settings, sql1.c_str());

		conn2 = mysql_init(0);
		conn2 = mysql_real_connect(conn2, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

		if (conn2)
		{
			sql1 = "CREATE TABLE settings(setting TEXT, value TEXT);";
			mysql_query(conn2, sql1.c_str());
			mysql_close(conn2);
		}

		conn3 = mysql_init(0);
		conn3 = mysql_real_connect(conn3, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

		if (conn3)
		{
			for (int x = 0; x <= 63; x++)
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
				}
				else if (x == 1)
				{
					if (cuda_accelleration)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 2)
				{
					if (cuda_accelleration_remote_enabled)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 3)
				{
					if (cuda_accelleration_remote_hostname == "")
						sql1 += "NULL";
					else
						sql1 += cuda_accelleration_remote_hostname;
				}
				else if (x == 4)
				{
					if (cuda_accelleration_remote_cores == "")
						sql1 += "NULL";
					else
						sql1 += cuda_accelleration_remote_cores;
				}
				else if (x == 5)
				{
					if (tensor_accelleration)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 6)
				{
					if (tensor_accelleration_remote_enabled)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 7)
				{
					if (tensor_accelleration_remote_hostname == "")
						sql1 += "NULL";
					else
						sql1 += tensor_accelleration_remote_hostname;
				}
				else if (x == 8)
				{
					if (tensor_accelleration_remote_cores == "")
						sql1 += "NULL";
					else
						sql1 += tensor_accelleration_remote_cores;
				}
				else if (x == 9)
				{
					if (working_memory_enabled)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 10)
				{
					if (working_memory_limit == "")
						sql1 += "NULL";
					else
						sql1 += working_memory_limit;
				}
				else if (x == 11)
				{
					if (short_term_memory_enabled)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 12)
				{
					if (short_term_memory_limit == "")
						sql1 += "NULL";
					else
						sql1 += short_term_memory_limit;
				}
				else if (x == 13)
				{
					if (long_term_memory_enabled)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 14)
				{
					if (long_term_memory_limit == "")
						sql1 += "NULL";
					else
						sql1 += long_term_memory_limit;
				}
				else if (x == 15)
				{
					if (speech_memory_enabled)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 16)
				{
					if (vision_object_detection)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 17)
				{
					if (vision_object_detection_cuda)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 18)
				{
					if (vision_object_detection_server)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 19)
				{
					if (vision_object_detection_server_hostname == "")
						sql1 += "NULL";
					else
						sql1 += vision_object_detection_server_hostname;
				}
				else if (x == 20)
				{
					if (visual_reasoning)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 21)
				{
					if (visual_memory)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 22)
				{
					if (vision_memory_directory == "")
						sql1 += "NULL";
					else
						sql1 += vision_memory_directory;
				}
				else if (x == 23)
				{
					if (camera1 == "")
						sql1 += "true";
					else
						sql1 += camera1;
				}
				else if (x == 24)
				{
					if (camera1_enabled)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 25)
				{
					if (camera1_fps == "")
						sql1 += "NULL";
					else
						sql1 += camera1_fps;
				}
				else if (x == 26)
				{
					if (camera1_resolution == "")
						sql1 += "NULL";
					else
						sql1 += camera1_resolution;
				}
				else if (x == 27)
				{
					if (camera2 == "")
						sql1 += "NULL";
					else
						sql1 += camera2;
				}
				else if (x == 28)
				{
					if (camera2_enabled)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 29)
				{
					if (camera2_fps == "")
						sql1 += "NULL";
					else
						sql1 += camera2_fps;
				}
				else if (x == 30)
				{
					if (camera2_resolution == "")
						sql1 += "NULL";
					else
						sql1 += camera2_resolution;
				}
				else if (x == 31)
				{
					if (computer_use)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 32)
				{
					if (reading)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 33)
				{
					if (reading_fallacy_check)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 34)
				{
					if (sound_memory)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 35)
				{
					if (speech_memory)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 36)
				{
					if (speech_recognition)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 37)
				{
					if (ethics_check_enabled)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 38)
				{
					if (sound_directory == "")
						sql1 += "NULL";
					else
						sql1 += sound_directory;
				}
				else if (x == 39)
				{
					if (sound_codec == "")
						sql1 += "NULL";
					else
						sql1 += sound_codec;
				}
				else if (x == 40)
				{
					if (sound_bitrate == "")
						sql1 += "NULL";
					else
						sql1 += sound_bitrate;
				}
				else if (x == 41)
				{
					if (speech_directory == "")
						sql1 += "NULL";
					else
						sql1 += speech_directory;
				}
				else if (x == 42)
				{
					if (speech_recognition_enable)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 43)
				{
					if (speech_lie_detection)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 44)
				{
					if (short_term_memory_time == "")
						sql1 += "NULL";
					else
						sql1 += short_term_memory_time;
				}
				else if (x == 45)
				{
					if (sound_memory_enabled)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 46)
				{
					if (vision_object_detection_remote_enabled)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 47)
				{
					if (microphone1_enabled)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 48)
				{
					if (microphone1_device_name == "")
						sql1 += "NULL";
					else
						sql1 += microphone1_device_name;
				}
				else if (x == 49)
				{
					if (microphone2_enabled)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 50)
				{
					if (microphone2_device_name == "")
						sql1 += "NULL";
					else
						sql1 += microphone2_device_name;
				}
				else if (x == 51)
				{
					if (ffmpeg_location == "")
						sql1 += "NULL";
					else
						sql1 += ffmpeg_location;
				}
				else if (x == 52)
				{
					if (sound_reasoning)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 53)
				{
					if (reading_reasoning)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 54)
				{
					if (speaking_reasoning)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 55)
				{
					if (working_memory_location == "")
						sql1 += "NULL";
					else
						sql1 += working_memory_location;
				}
				else if (x == 56)
				{
					if (short_term_memory_location == "")
						sql1 += "NULL";
					else
						sql1 += short_term_memory_location;
				}
				else if (x == 57)
				{
					if (long_term_memory_location == "")
						sql1 += "NULL";
					else
						sql1 += long_term_memory_location;
				}
				else if (x == 58)
				{
					if (news_watching)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 59)
				{
					if (actions_watching)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 60)
				{
					if (action_detection)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 61)
				{
					if (needs_detection)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 62)
				{
					if (navigation_detection)
						sql1 += "true";
					else
						sql1 += "false";
				}
				else if (x == 63)
				{
					if (social_needs_detection)
						sql1 += "true";
					else
						sql1 += "false";
				}

				sql1 += "\");";
				cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
			mysql_close(conn3);
		}
	}

	ftp_settings = mysql_init(0);
	ftp_settings = mysql_real_connect(ftp_settings, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	if (ftp_settings)
	{
		sql1 = "DROP TABLE ftp_settings;";
		mysql_query(ftp_settings, sql1.c_str());
		//result = mysql_store_result(ftp_settings);

		conn2 = mysql_init(0);
		conn2 = mysql_real_connect(conn2, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

		if (conn2)
		{
			sql1 = "CREATE TABLE ftp_settings(setting TEXT, value TEXT);";
			mysql_query(conn2, sql1.c_str());
			mysql_close(conn2);
		}

		conn3 = mysql_init(0);
		conn3 = mysql_real_connect(conn3, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

		if (conn3)
		{
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
						sql1 += ftp_hostname;
				}
				else if (x == 2)
				{
					if (ftp_username == "")
						sql1 += "NULL";
					else
						sql1 += ftp_username;
				}
				else if (x == 3)
				{
					if (ftp_password == "")
						sql1 += "NULL";
					else
						sql1 += ftp_password;
				}
				else if (x == 4)
				{
					if (ftp_vision_directory == "")
						sql1 += "NULL";
					else
						sql1 += ftp_vision_directory;
				}
				else if (x == 5)
				{
					if (ftp_sound_directory == "")
						sql1 += "NULL";
				}
				else if (x == 6)
				{
					if (ftp_vision_storage_limit == "")
						sql1 += "NULL";
					else
						sql1 += ftp_vision_storage_limit;
				}
				else if (x == 7)
				{
					if (ftp_sound_storage_limit == "")
						sql1 += "NULL";
					else
						sql1 += ftp_sound_storage_limit;
				}

				sql1 += "\");";
				cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
		}
	}

	mysql_settings = mysql_init(0);
	mysql_settings = mysql_real_connect(mysql_settings, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	if (mysql_settings)
	{
		sql1 = "DROP TABLE mysql_settings;";
		mysql_query(mysql_settings, sql1.c_str());
		//result = mysql_store_result(mysql_settings);

		conn2 = mysql_init(0);
		conn2 = mysql_real_connect(conn2, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

		if (conn2)
		{
			sql1 = "CREATE TABLE mysql_settings(setting TEXT, value TEXT);";
			mysql_query(conn2, sql1.c_str());
			mysql_close(conn2);
		}

		conn3 = mysql_init(0);
		conn3 = mysql_real_connect(conn3, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

		if (conn3)
		{
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
						sql1 += mysql_hostname;
				}
				else if (x == 1)
				{
					if (mysql_username == "")
						sql1 += "NULL";
					else
						sql1 += mysql_username;
				}
				else if (x == 2)
				{
					if (mysql_password == "")
						sql1 += "NULL";
					else
						sql1 += mysql_password;
				}
				else if (x == 3)
				{
					if (mysql_vision_database == "")
						sql1 += "NULL";
					else
						sql1 += mysql_vision_database;
				}
				else if (x == 4)
				{
					if (mysql_sound_database == "")
						sql1 += "NULL";
					else
						sql1 += mysql_sound_database;
				}
				else if (x == 5)
				{
					if (mysql_speech_database == "")
						sql1 += "NULL";
					else
						sql1 += mysql_speech_database;
				}
				else if (x == 6)
				{
					if (mysql_working_memory_database == "")
						sql1 += "NULL";
					else
						sql1 += mysql_working_memory_database;
				}
				else if (x == 7)
				{
					if (mysql_short_term_memory_database == "")
						sql1 += "NULL";
					else
						sql1 += mysql_short_term_memory_database;
				}
				else if (x == 8)
				{
					if (mysql_long_term_memory_database == "")
						sql1 += "NULL";
					else
						sql1 += mysql_long_term_memory_database;
				}

				sql1 += "\");";
				cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
			}
		}
	}

	computer_settings = mysql_init(0);
	computer_settings = mysql_real_connect(computer_settings, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

	if (computer_settings)
	{
		sql1 = "DROP TABLE computer_settings;";
		mysql_query(computer_settings, sql1.c_str());
		mysql_close(computer_settings);

		conn2 = mysql_init(0);
		conn2 = mysql_real_connect(conn2, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

		if (conn2)
		{
			sql1 = "CREATE TABLE computer_settings(setting TEXT, value TEXT);";
			mysql_query(conn2, sql1.c_str());
			mysql_close(conn2);
		}

		conn3 = mysql_init(0);
		conn3 = mysql_real_connect(conn3, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

		if (conn3)
		{
			for (int x = 0; x <= 4; x++)
			{
				sql1 = "INSERT INTO computer_settings(setting, value) VALUES(\"";
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
						sql1 += computer_hostname;
				}
				else if (x == 2)
				{
					if (computer_username == "")
						sql1 += "NULL";
					else
						sql1 += computer_username;
				}
				else if (x == 3)
				{
					if (computer_password == "")
						sql1 += "NULL";
					else
						sql1 += computer_password;
				}

				sql1 += "\");";
				cout << "SQL1: " << sql1 << endl;
				mysql_query(conn3, sql1.c_str());
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