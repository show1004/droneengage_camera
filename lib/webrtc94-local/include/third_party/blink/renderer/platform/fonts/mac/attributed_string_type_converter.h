// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_RENDERER_PLATFORM_FONTS_MAC_ATTRIBUTED_STRING_TYPE_CONVERTER_H_
#define THIRD_PARTY_BLINK_RENDERER_PLATFORM_FONTS_MAC_ATTRIBUTED_STRING_TYPE_CONVERTER_H_

#include "third_party/blink/renderer/platform/platform_export.h"
#include "ui/base/mojom/attributed_string.mojom-blink.h"

#if __OBJC__
@class NSAttributedString;
#else
class NSAttributedString;
#endif

namespace mojo {

template <>
struct PLATFORM_EXPORT
    TypeConverter<ui::mojom::blink::AttributedStringPtr, NSAttributedString*> {
  static ui::mojom::blink::AttributedStringPtr Convert(
      const NSAttributedString* ns_attributed_string);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_RENDERER_PLATFORM_FONTS_MAC_ATTRIBUTED_STRING_TYPE_CONVERTER_H_
