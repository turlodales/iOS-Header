//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _MKPinAnnotationViewImageCacheKey : NSObject
{
    unsigned long long _mapType;
    UIColor *_pinColor;
    long long _idiom;
    long long _userInterfaceStyle;
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithMapType:(unsigned long long)arg1 pinColor:(id)arg2 traits:(id)arg3;

@end

