// Copyright (c) 2013 Intel Corporation. All rights reserved.
// Copyright (c) 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef XWALK_SYSAPPS_DEVICE_CAPABILITIES_AV_CODECS_PROVIDER_FFMPEG_H_
#define XWALK_SYSAPPS_DEVICE_CAPABILITIES_AV_CODECS_PROVIDER_FFMPEG_H_

#include "xwalk/sysapps/device_capabilities/av_codecs_provider.h"

namespace xwalk {
namespace sysapps {

class AVCodecsProviderFFmpeg : public AVCodecsProvider {
 public:
  AVCodecsProviderFFmpeg();
  ~AVCodecsProviderFFmpeg() override;

  scoped_ptr<SystemAVCodecs> GetSupportedCodecs() const override;

 private:
  DISALLOW_COPY_AND_ASSIGN(AVCodecsProviderFFmpeg);
};

}  // namespace sysapps
}  // namespace xwalk

#endif  // XWALK_SYSAPPS_DEVICE_CAPABILITIES_AV_CODECS_PROVIDER_FFMPEG_H_
