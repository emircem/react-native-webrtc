/*
 *  Copyright 2017 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#import <Foundation/Foundation.h>

#import "WebRTC/RTCVideoRenderer.h"

NS_ASSUME_NONNULL_BEGIN
RTC_EXPORT

/**
 * RTCMTLVideoView is thin wrapper around MTKView.
 *
 * It has id<RTCVideoRenderer> property that renders video frames in the view's
 * bounds using Metal.
 */
NS_CLASS_AVAILABLE_IOS(9)
@interface RTCMTLVideoView : UIView <RTCVideoRenderer>

@end
NS_ASSUME_NONNULL_END
