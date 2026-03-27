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
#include "FFMpeg.hpp"

using namespace std;

AVCodecContext* _FFMpeg::initFFmpegContext(const std::string& outputFile, const FrameInfo& frameInfo)
{
    //// Initialize the AVFormatContext and AVCodecContext
    //AVFormatContext* formatCtx = avformat_alloc_context();
    //if (!formatCtx)
    //{
    //    std::cerr << "Error allocating format context" << std::endl;
    //    return vector<std::string>();
    //}

    //// Create a new output file stream
    //if (avio_open(&formatCtx->pb, outputFile.c_str(), AVIO_FLAG_WRITE) < 0)
    //{
    //    avformat_free_context(formatCtx);
    //    std::cerr << "Error opening output file" << std::endl;
    //    return vector<std::string>();
    //}

    //// Create a new AVOutputFormat
    //const AVOutputFormat* outputFmt = av_guess_format(nullptr, outputFile.c_str(), nullptr);
    //if (!outputFmt)
    //{
    //    avformat_free_context(formatCtx);
    //    std::cerr << "Error guessing output format" << std::endl;
    //    return vector<std::string>();
    //}

    //// Add a new stream to the format context
    //AVStream* stream = avformat_new_stream(formatCtx, nullptr);
    //if (!stream)
    //{
    //    avformat_free_context(formatCtx);
    //    std::cerr << "Error adding stream to format context" << std::endl;
    //    return vector<std::string>();
    //}

    //// Initialize the codec context
    //AVCodecContext* codecCtx = avcodec_alloc_context3(nullptr);
    //if (!codecCtx)
    //{
    //    av_freep(&stream);
    //    avformat_free_context(formatCtx);
    //    std::cerr << "Error allocating codec context" << std::endl;
    //    return vector<std::string>();
    //}

    //// Set up the codec parameters
    //codecCtx->width = frameInfo.width;
    //codecCtx->height = frameInfo.height;
    //codecCtx->pix_fmt = frameInfo.pixelFormat;
    //codecCtx->time_base.num = 1;
    //codecCtx->time_base.den = 30;  // Set framerate to 30 FPS

    //// Find the video encoder
    //const AVCodec* codec = avcodec_find_encoder_by_name("libx264");
    //if (!codec)
    //{
    //    std::cerr << "Error finding video encoder" << std::endl;
    //    avcodec_free_context(&codecCtx);
    //    av_freep(&stream);
    //    avformat_free_context(formatCtx);
    //    return vector<std::string>();
    //}

    //// Open the codec
    //if (avcodec_open2(codecCtx, codec, nullptr) < 0) {
    //    std::cerr << "Error opening codec" << std::endl;
    //    avcodec_free_context(&codecCtx);
    //    av_freep(&stream);
    //    avformat_free_context(formatCtx);
    //    return vector<std::string>();
    //}

    //// Set up the stream
    //stream->time_base = codecCtx->time_base;
    //stream->codecpar->width = codecCtx->width;
    //stream->codecpar->height = codecCtx->height;
    //stream->codecpar->format = codecCtx->pix_fmt;

    //// Write the header to the output file
    //if (avformat_write_header(formatCtx, nullptr) < 0) {
    //    std::cerr << "Error writing header" << std::endl;
    //    avio_closep(&formatCtx->pb);
    //    av_freep(&stream);
    //    avcodec_free_context(&codecCtx);
    //    avformat_free_context(formatCtx);
    //    return vector<std::string>();
    //}

    //return codecCtx;
    return 0;
}
//
////// Function to encode a frame
//int _FFMpeg::encodeFrame(const AVCodecContext* codecCtx, uint8_t** frameData)
//{
//    // Create an AVFrame
//    AVFrame* frame = av_frame_alloc();
//
//    if (!frame)
//    {
//        std::cerr << "Error allocating frame" << std::endl;
//        return -1;
//    }
//
//    // Set up the frame
//    frame->width = codecCtx->width;
//    frame->height = codecCtx->height;
//    frame->format = codecCtx->pix_fmt;
//
//    // Allocate memory for the frame data
//    int ret = av_frame_get_buffer(frame, 32);
//    if (ret < 0)
//    {
//        std::cerr << "Error allocating frame buffer" << std::endl;
//        av_frame_free(&frame);
//        return -1;
//    }
//
//    // Copy the frame data
//    for (int i = 0; i < codecCtx->height; ++i)
//    {
//        memcpy(frame->data[0] + i * frame->linesize[0], frameData[0] + i * codecCtx->width, codecCtx->width);
//    }
//
//    // Encode the frame
//    int gotPacket = 0;
//    AVPacket* packet = av_packet_alloc();
//    if (!packet)
//    {
//        std::cerr << "Error allocating packet" << std::endl;
//        av_frame_free(&frame);
//        return -1;
//    }
//    ret = avcodec_encode_video2(codecCtx, packet, frame, &gotPacket);
//    if (ret < 0 || gotPacket == 0)
//    {
//        std::cerr << "Error encoding frame" << std::endl;
//        av_packet_free(&packet);
//        av_frame_free(&frame);
//        return -1;
//    }
//
//    // Write the encoded packet to the output file
//    ret = av_write_frame(codecCtx, packet);
//    if (ret < 0)
//    {
//        std::cerr << "Error writing frame" << std::endl;
//        av_packet_free(&packet);
//        av_frame_free(&frame);
//        return -1;
//    }
//
//    // Clean up
//    av_packet_free(&packet);
//    av_frame_free(&frame);
//
//    return 0;
//}

// Function to extract still frames from an MP4 file
void _FFMpeg::extract_frames(const std::string& input_file, const std::string& output_prefix)
{
    // Initialize the AVFormatContext and AVCodecContext structures
    AVFormatContext* format_context = nullptr;
    AVCodecContext* codec_context = nullptr;

    // Register all formats and codecs
    //av_register_all();

    // Open the input file
    if (avformat_open_input(&format_context, input_file.c_str(), nullptr, nullptr) < 0) {
        std::cerr << "Error opening input file." << std::endl;
        return;
    }

    // Find the video stream
    int video_stream_index = -1;
    for (int i = 0; i < format_context->nb_streams; ++i) {
        if (format_context->streams[i]->codecpar->codec_type == AVMEDIA_TYPE_VIDEO) {
            video_stream_index = i;
            break;
        }
    }

    // Check if a video stream was found
    if (video_stream_index == -1) {
        std::cerr << "No video stream found." << std::endl;
        avformat_close_input(&format_context);
        return;
    }

    // Find the decoder for the video stream
    AVCodec* codec = nullptr;
    if (avcodec_parameters_to_context(codec_context, format_context->streams[video_stream_index]->codecpar) < 0) {
        std::cerr << "Error creating codec context." << std::endl;
        avformat_close_input(&format_context);
        return;
    }

    // Open the decoder
    if (avcodec_open2(codec_context, codec, nullptr) < 0) {
        std::cerr << "Error opening codec." << std::endl;
        avcodec_free_context(&codec_context);
        avformat_close_input(&format_context);
        return;
    }

    // Allocate a frame for the decoded video
    AVFrame* frame = av_frame_alloc();

    // Initialize the SwsContext structure for scaling and converting frames
    struct SwsContext* sws_context = nullptr;

    int frame_count = 0;

    while (true)
    {
        // Read a packet from the input file
        AVPacket packet;

        if (av_read_frame(format_context, &packet) < 0)
        {
            break;  // EOF reached
        }

        // Check if this is a video packet
        if (packet.stream_index == video_stream_index)
        {
            // Send the packet to the decoder
            // Pseudocode plan:
            // 1. avcodec_decode_video2 is deprecated and removed in recent FFmpeg versions.
            // 2. Replace usage with the new send/receive API: avcodec_send_packet and avcodec_receive_frame.
            // 3. The new API requires sending the packet, then receiving the frame in a loop.
            // 4. Update the code to use avcodec_send_packet(codec_context, &packet) and avcodec_receive_frame(codec_context, frame).
            // 5. Handle EAGAIN and AVERROR_EOF as per FFmpeg documentation.

            // Example replacement for:
            // int response = avcodec_decode_video2(codec_context, frame, &packet);

            int response = avcodec_send_packet(codec_context, &packet);

            if (response < 0)
            {
                // Handle error
            }
            else
            {
                while (response >= 0)
                {
                    response = avcodec_receive_frame(codec_context, frame);

                    if (response == AVERROR(EAGAIN) || response == AVERROR_EOF)
                    {
                        break;
                    }
                    else if (response < 0)
                    {
                        // Handle error
                        break;
                    }
                    // Process decoded frame here
                    // Check if a complete frame has been decoded
                    if (frame->width > 0 && frame->height > 0)
                    {
                        // Create a new SwsContext structure for scaling and converting frames
                        //sws_context = sws_getCachedContext(sws_context,
                        //    frame->width, frame->height, codec_context->pix_fmt,
                        //    frame->width, frame->height, AV_PIX_FMT_BGR24,
                        //    SWS_BICUBIC, nullptr, nullptr, nullptr);

                        //// Allocate memory for the scaled and converted frame
                        uint8_t* output_buffer = (uint8_t*)av_malloc(frame->height * frame->width * 3);

                        if (!output_buffer)
                        {
                            std::cerr << "Error allocating memory for output buffer." << std::endl;
                            continue;
                        }

                        // Scale and convert the frame using SwsContext
                        //uint8_t* in_data[] = { frame->data[0], frame->data[1], frame->data[2] };
                        //int in_linesize[] = { frame->linesize[0], frame->linesize[1], frame->linesize[2] };
                        //sws_scale(sws_context, in_data, in_linesize,
                        //    0, codec_context->height,
                        //    &output_buffer, frame->width * 3);

                        // Save the scaled and converted frame as a BMP image
                        std::string output_file_name = output_prefix + std::to_string(frame_count) + ".bmp";
                        FILE* output_file = fopen(output_file_name.c_str(), "wb");

                        if (!output_file)
                        {
                            std::cerr << "Error opening output file." << std::endl;
                            //av_free(output_buffer);
                            continue;
                        }

                        // Write the BMP image header
                        uint8_t header[54];
                        memset(header, 0x00, 54);
                        header[0] = 'B';
                        header[1] = 'M';
                        *(uint32_t*)(header + 2) = 54 + frame->width * frame->height * 3;
                        *(uint16_t*)(header + 12) = 40;
                        *(uint32_t*)(header + 14) = 40 + frame->width * frame->height * 3;
                        *(uint32_t*)(header + 18) = frame->width;
                        *(uint32_t*)(header + 22) = -frame->height; // Height is negative for top-down bitmaps
                        fwrite(header, 1, 54, output_file);

                        // Write the pixel data of the BMP image
                        fwrite(output_buffer, 1, frame->width * frame->height * 3, output_file);
                        fclose(output_file);
                        av_free(output_buffer);

                        // Increment the frame count
                        frame_count++;
                    }
                }
            }
        }

        // Unref the packet and free it
        av_packet_unref(&packet);
    }

    // Free all allocated resources
    sws_freeContext(sws_context);
    av_frame_free(&frame);
    avcodec_close(codec_context);
    avformat_close_input(&format_context);
}

int _FFMpeg::ConvertToMP4(const string& input_file, const string& output_file)
{
    // Initialize FFmpeg
    avformat_network_init();

    AVFormatContext* ifmt_ctx = NULL;
    int ret;

    // Open the input file
    if ((ret = avformat_open_input(&ifmt_ctx, input_file.c_str(), NULL, NULL)) < 0) {
        std::cerr << "Error opening input file: " << ret << std::endl;
        return ret;
    }

    // Read the header of the input file
    if ((ret = avformat_find_stream_info(ifmt_ctx, NULL)) < 0) {
        std::cerr << "Error reading stream info: " << ret << std::endl;
        avformat_close_input(&ifmt_ctx);
        return ret;
    }

    // Create an output format context for the MP4 file
    AVFormatContext* ofmt_ctx = NULL;

    // Allocate an output format context
    if ((ret = avformat_alloc_output_context2(&ofmt_ctx, NULL, NULL, output_file.c_str())) < 0) {
        std::cerr << "Error allocating output context: " << ret << std::endl;
        avformat_close_input(&ifmt_ctx);
        return ret;
    }

    // Find the first video stream
    int video_stream_index = -1;
    for (int i = 0; i < ifmt_ctx->nb_streams; i++) {
        if (ifmt_ctx->streams[i]->codecpar->codec_type == AVMEDIA_TYPE_VIDEO) {
            video_stream_index = i;
            break;
        }
    }

    if (video_stream_index == -1) {
        std::cerr << "No video stream found in the input file." << std::endl;
        avformat_close_input(&ifmt_ctx);
        avformat_free_context(ofmt_ctx);
        return AVERROR(EINVAL);
    }

    // Create a new stream for the output context
    AVStream* out_stream = avformat_new_stream(ofmt_ctx, NULL);

    if (!out_stream) {
        std::cerr << "Error creating output stream." << std::endl;
        avformat_close_input(&ifmt_ctx);
        avformat_free_context(ofmt_ctx);
        return AVERROR(ENOMEM);
    }

    // Copy the video codec parameters from the input to the output
    if ((ret = avcodec_parameters_copy(out_stream->codecpar, ifmt_ctx->streams[video_stream_index]->codecpar)) <
        0) {
        std::cerr << "Error copying codec parameters: " << ret << std::endl;
        avformat_close_input(&ifmt_ctx);
        avformat_free_context(ofmt_ctx);
        return ret;
    }

    // Set the output format to MP4
    ofmt_ctx->oformat = av_guess_format(NULL, output_file.c_str(), NULL);

    if (!ofmt_ctx->oformat) {
        std::cerr << "Error guessing output format." << std::endl;
        avformat_close_input(&ifmt_ctx);
        avformat_free_context(ofmt_ctx);
        return AVERROR(EINVAL);
    }

    // Open the output file
    if ((ret = avio_open(&ofmt_ctx->pb, output_file.c_str(), AVIO_FLAG_WRITE)) < 0) {
        std::cerr << "Error opening output file: " << ret << std::endl;
        avformat_close_input(&ifmt_ctx);
        avformat_free_context(ofmt_ctx);
        return ret;
    }

    // Write the header for the MP4 file
    if ((ret = avformat_write_header(ofmt_ctx, NULL)) < 0) {
        std::cerr << "Error writing output header: " << ret << std::endl;
        avio_close(ofmt_ctx->pb);
        avformat_free_context(ofmt_ctx);
        avformat_close_input(&ifmt_ctx);
        return ret;
    }

    // Read and write frames
    AVPacket packet;

    while (av_read_frame(ifmt_ctx, &packet) >= 0)
    {
        if (packet.stream_index == video_stream_index)
        {
            // Write the frame to the output file
            if ((ret = av_write_frame(ofmt_ctx, &packet)) < 0)
            {
                std::cerr << "Error writing packet: " << ret << std::endl;
                break;
            }
        }

        // Free the packet
        // Replace deprecated av_free_packet with av_packet_unref
        av_packet_unref(&packet);
    }

    // Write trailer for the MP4 file
    if ((ret = av_write_trailer(ofmt_ctx)) < 0)
    {
        std::cerr << "Error writing output trailer: " << ret << std::endl;
    }

    // Close and free everything
    avio_close(ofmt_ctx->pb);
    avformat_free_context(ofmt_ctx);
    avformat_close_input(&ifmt_ctx);

    return 0; // Success
}

/*
    Purpose: Get encoded frames and audio and encode them into a single .mp4 container
    arg1: Directory where the image sequence is stored
    arg2: Encoded MP4 file output file
*/
int _FFMpeg::EncodeVideo(const string& images_directory, const string& audio_file, const string& output_file)
{
    // Open input format context for the image sequence
    AVFormatContext* inFmtCtxImg = NULL;
    if (avformat_open_input(&inFmtCtxImg, "", NULL, NULL) < 0) {
        std::cerr << "Failed to open input format context for images." << std::endl;
        return -1;
    }

    // Open input format context for the audio file
    AVFormatContext* inFmtCtxAud = NULL;
    if (avformat_open_input(&inFmtCtxAud, audio_file.c_str(), NULL, NULL) < 0) {
        std::cerr << "Failed to open input format context for audio." << std::endl;
        avformat_close_input(&inFmtCtxImg);
        return -1;
    }

    // Create output format context
    AVFormatContext* outFmtCtx = NULL;
    if (avformat_alloc_output_context2(&outFmtCtx, NULL, "mp4", output_file.c_str()) < 0) {
        std::cerr << "Failed to allocate output format context." << std::endl;
        avformat_close_input(&inFmtCtxImg);
        avformat_close_input(&inFmtCtxAud);
        return -1;
    }

    // Find the video stream in the input format context for images
    int imgStreamIndex = -1;
    for (int i = 0; i < inFmtCtxImg->nb_streams; i++) {
        if (inFmtCtxImg->streams[i]->codecpar->codec_type == AVMEDIA_TYPE_VIDEO) {
            imgStreamIndex = i;
            break;
        }
    }

    // Find the audio stream in the input format context for audio
    int audStreamIndex = -1;
    for (int i = 0; i < inFmtCtxAud->nb_streams; i++) {
        if (inFmtCtxAud->streams[i]->codecpar->codec_type == AVMEDIA_TYPE_AUDIO) {
            audStreamIndex = i;
            break;
        }
    }

    // Create a video stream in the output format context
    AVStream* outImgStream = avformat_new_stream(outFmtCtx, NULL);
    if (!outImgStream) {
        std::cerr << "Failed to create video stream in output format context." << std::endl;
        avformat_free_context(inFmtCtxImg);
        avformat_free_context(inFmtCtxAud);
        avformat_free_context(outFmtCtx);
        return -1;
    }

    // Copy the codec parameters from the input video stream
    if (avcodec_parameters_copy(outImgStream->codecpar, inFmtCtxImg->streams[imgStreamIndex]->codecpar) < 0) {
        std::cerr << "Failed to copy codec parameters for video." << std::endl;
        avformat_free_context(inFmtCtxImg);
        avformat_free_context(inFmtCtxAud);
        avformat_free_context(outFmtCtx);
        return -1;
    }

    // Create an audio stream in the output format context
    AVStream* outAudStream = avformat_new_stream(outFmtCtx, NULL);
    if (!outAudStream) {
        std::cerr << "Failed to create audio stream in output format context." << std::endl;
        avformat_free_context(inFmtCtxImg);
        avformat_free_context(inFmtCtxAud);
        avformat_free_context(outFmtCtx);
        return -1;
    }

    // Copy the codec parameters from the input audio stream
    if (avcodec_parameters_copy(outAudStream->codecpar, inFmtCtxAud->streams[audStreamIndex]->codecpar) < 0) {
        std::cerr << "Failed to copy codec parameters for audio." << std::endl;
        avformat_free_context(inFmtCtxImg);
        avformat_free_context(inFmtCtxAud);
        avformat_free_context(outFmtCtx);
        return -1;
    }

    // Open the output file
    if (avio_open(&outFmtCtx->pb, output_file.c_str(), AVIO_FLAG_WRITE) < 0) {
        std::cerr << "Failed to open output file." << std::endl;
        avformat_free_context(inFmtCtxImg);
        avformat_free_context(inFmtCtxAud);
        avformat_free_context(outFmtCtx);
        return -1;
    }

    // Write the header of the output file
    if (avformat_write_header(outFmtCtx, NULL) < 0) {
        std::cerr << "Failed to write header of output file." << std::endl;
        avio_closep(&outFmtCtx->pb);
        avformat_free_context(inFmtCtxImg);
        avformat_free_context(inFmtCtxAud);
        avformat_free_context(outFmtCtx);
        return -1;
    }

    // Initialize variables for the main loop
    AVPacket* packet = av_packet_alloc();
    if (!packet) {
        std::cerr << "Failed to allocate packet." << std::endl;
        avio_closep(&outFmtCtx->pb);
        avformat_free_context(inFmtCtxImg);
        avformat_free_context(inFmtCtxAud);
        avformat_free_context(outFmtCtx);
        return -1;
    }

    int ret = 0;
    while (ret >= 0)
    {
        // Read a packet from the input format context for images
        ret = av_read_frame(inFmtCtxImg, packet);
        if (ret < 0 && ret != AVERROR_EOF)
        {
            std::cerr << "Failed to read frame from image sequence." << std::endl;
            break;
        }
        else if (ret == AVERROR_EOF)
        {
            // If we reached the end of the image sequence, start re-reading from the beginning
            av_seek_frame(inFmtCtxImg, 0, 0, AVSEEK_FLAG_BACKWARD);
            ret = av_read_frame(inFmtCtxImg, packet);
            if (ret < 0 && ret != AVERROR_EOF)
            {
                std::cerr << "Failed to read frame from image sequence after seeking." << std::endl;
                break;
            }
        }

        // If the packet is for the video stream
        if (packet->stream_index == imgStreamIndex)
        {
            // Rescale the timestamp of the packet
            AVRational timeBase = inFmtCtxImg->streams[imgStreamIndex]->time_base;
            int64_t pts = av_rescale_q(packet->pts, timeBase, outImgStream->time_base);

            // Set the stream index and timestamp of the packet
            packet->stream_index = 0; // Video stream is at index 0 in the output file
            packet->pts = pts;
            packet->dts = pts;

            // Write the packet to the output file
            if (av_interleaved_write_frame(outFmtCtx, packet) < 0)
            {
                std::cerr << "Failed to write frame to output file." << std::endl;
                break;
            }
        }

        // Free the packet
        av_packet_free(&packet);
    }

    // Read and write audio packets until we reach the end of the audio stream
    while (true)
    {
        ret = av_read_frame(inFmtCtxAud, packet);
        if (ret < 0 && ret != AVERROR_EOF)
        {
            std::cerr << "Failed to read frame from audio." << std::endl;
            break;
        }
        else if (ret == AVERROR_EOF)
        {
            break; // Exit the loop when we reach the end of the audio stream
        }

        // If the packet is for the audio stream
        if (packet->stream_index == audStreamIndex)
        {
            // Rescale the timestamp of the packet
            AVRational timeBase = inFmtCtxAud->streams[audStreamIndex]->time_base;
            int64_t pts = av_rescale_q(packet->pts, timeBase, outAudStream->time_base);

            // Set the stream index and timestamp of the packet
            packet->stream_index = 1; // Audio stream is at index 1 in the output file
            packet->pts = pts;
            packet->dts = pts;

            // Write the packet to the output file
            if (av_interleaved_write_frame(outFmtCtx, packet) < 0)
            {
                std::cerr << "Failed to write frame to output file." << std::endl;
                break;
            }
        }

        // Free the packet
        av_packet_free(&packet);
    }

    // Write the trailer of the output file
    if (av_write_trailer(outFmtCtx) < 0)
    {
        std::cerr << "Failed to write trailer of output file." << std::endl;
    }

    // Close the input and output format contexts
    avformat_close_input(&inFmtCtxImg);
    avformat_close_input(&inFmtCtxAud);
    avio_closep(&outFmtCtx->pb);
    avformat_free_context(outFmtCtx);

    return 0;
}

void _FFMpeg::GetStillFrames(string video_file)
{
    // Initialize FFmpeg
    AVFormatContext* ifmt_ctx = NULL;
    avformat_network_init();

    // Your conversion code here...
}

/*
PSEUDOCODE PLAN (detailed):
    1. Build an output filename string from `output_prefix` (e.g. output_prefix + ".wav").
    2. Allocate output format context using `avformat_alloc_output_context2`, passing the output filename so FFmpeg knows the format/container.
       - This avoids using `av_strlcpy` and avoids writing to a non-existent `filename` member on `AVFormatContext`.
    3. Create a new output stream with `avformat_new_stream`.
    4. Copy codec parameters from the input audio stream to the output stream using `avcodec_parameters_copy`.
       - This implements a remux approach (no re-encoding). It's minimal and resolves the compile/runtime issues reported.
    5. Open the output IO with `avio_open`.
    6. Write the header with `avformat_write_header`.
    7. Read packets from the input file using `av_read_frame`.
       - For packets that belong to the audio stream:
         a. Rescale packet timestamps from input stream timebase to output stream timebase using `av_packet_rescale_ts`.
         b. Update `packet.stream_index` to output stream index.
         c. Write the packet with `av_interleaved_write_frame`.
    8. Write the trailer and clean up: close IO, free format contexts, and unreference packets/frames.
    9. Provide error handling and resource cleanup on early exits.
*/
string _FFMpeg::ConvertToWav(const std::string& audio_file, const std::string& output_prefix)
{
    // Initialize FFmpeg network layer (safe to call multiple times)
    avformat_network_init();

    AVFormatContext* ifmt_ctx = nullptr;
    if (avformat_open_input(&ifmt_ctx, audio_file.c_str(), nullptr, nullptr) < 0)
    {
        std::cerr << "Error: Unable to open input file: " << audio_file << std::endl;
        return "NULL";
    }

    if (avformat_find_stream_info(ifmt_ctx, nullptr) < 0)
    {
        std::cerr << "Error: Unable to read stream information for: " << audio_file << std::endl;
        avformat_close_input(&ifmt_ctx);
        return "NULL";
    }

    int audio_stream_index = -1;
    for (unsigned i = 0; i < ifmt_ctx->nb_streams; ++i)
    {
        if (ifmt_ctx->streams[i]->codecpar->codec_type == AVMEDIA_TYPE_AUDIO)
        {
            audio_stream_index = static_cast<int>(i);
            break;
        }
    }

    if (audio_stream_index == -1)
    {
        std::cerr << "Error: No audio stream found in: " << audio_file << std::endl;
        avformat_close_input(&ifmt_ctx);
        return "NULL";
    }

    // Build output filename
    std::string out_filename = output_prefix;

    // If the user passed a directory or prefix, ensure a filename exists; append ".wav" if not present.
    if (out_filename.empty())
    {
        out_filename = "output.wav";
    }
    else
    {
        // If the string doesn't already end with .wav, append it
        if (out_filename.size() < 4 || out_filename.substr(out_filename.size() - 4) != ".wav")
        {
            out_filename += ".wav";
        }
    }

    AVFormatContext* ofmt_ctx = nullptr;

    // Allocate output context for the given output filename (lets FFmpeg pick the correct muxer)
    if (avformat_alloc_output_context2(&ofmt_ctx, nullptr, nullptr, out_filename.c_str()) < 0 || !ofmt_ctx)
    {
        std::cerr << "Error: Could not allocate output context for: " << out_filename << std::endl;
        avformat_close_input(&ifmt_ctx);
        return "NULL";
    }

    // Create new output stream
    AVStream* in_stream = ifmt_ctx->streams[audio_stream_index];
    AVStream* out_stream = avformat_new_stream(ofmt_ctx, nullptr);
    if (!out_stream)
    {
        std::cerr << "Error: Failed allocating output stream." << std::endl;
        avformat_free_context(ofmt_ctx);
        avformat_close_input(&ifmt_ctx);
        return "NULL";
    }

    // Copy codec parameters from input to output (remux)
    if (avcodec_parameters_copy(out_stream->codecpar, in_stream->codecpar) < 0)
    {
        std::cerr << "Error: Failed to copy codec parameters to output stream." << std::endl;
        avformat_free_context(ofmt_ctx);
        avformat_close_input(&ifmt_ctx);
        return "NULL";
    }
    out_stream->codecpar->codec_tag = 0;

    // Open the output file IO
    if (!(ofmt_ctx->oformat->flags & AVFMT_NOFILE))
    {
        if (avio_open(&ofmt_ctx->pb, out_filename.c_str(), AVIO_FLAG_WRITE) < 0)
        {
            std::cerr << "Error: Could not open output file: " << out_filename << std::endl;
            avformat_free_context(ofmt_ctx);
            avformat_close_input(&ifmt_ctx);
            return "NULL";
        }
    }

    // Write header
    if (avformat_write_header(ofmt_ctx, nullptr) < 0)
    {
        std::cerr << "Error: Failed to write header to: " << out_filename << std::endl;
        if (!(ofmt_ctx->oformat->flags & AVFMT_NOFILE))
            avio_closep(&ofmt_ctx->pb);
        avformat_free_context(ofmt_ctx);
        avformat_close_input(&ifmt_ctx);
        return "NULL";
    }

    // Read packets and remux audio packets
    AVPacket pkt;

    while (av_read_frame(ifmt_ctx, &pkt) >= 0)
    {
        if (pkt.stream_index == audio_stream_index)
        {
            // Rescale timestamps from input to output stream
            av_packet_rescale_ts(&pkt, in_stream->time_base, out_stream->time_base);
            pkt.stream_index = out_stream->index;

            if (av_interleaved_write_frame(ofmt_ctx, &pkt) < 0)
            {
                std::cerr << "Warning: Error muxing packet into output file." << std::endl;
                // Continue attempting to write remaining packets
            }
        }

        av_packet_unref(&pkt);
    }

    // Write trailer and cleanup
    av_write_trailer(ofmt_ctx);

    if (!(ofmt_ctx->oformat->flags & AVFMT_NOFILE))
        avio_closep(&ofmt_ctx->pb);

    avformat_free_context(ofmt_ctx);
    avformat_close_input(&ifmt_ctx);

    return out_filename;
}

void _FFMpeg::ExtractAudio(string audio_file)
{

}

//static void EncodeAudio(float audio);
//static void ExtractSubtitles(string mp4_video_file);