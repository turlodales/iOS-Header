//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCColor;

@interface FCContentColorPair : NSObject
{
    FCColor *_lightColor;
    FCColor *_darkColor;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) FCColor *darkColor; // @synthesize darkColor=_darkColor;
@property(readonly, copy, nonatomic) FCColor *lightColor; // @synthesize lightColor=_lightColor;
- (id)initWithLightColor:(id)arg1 darkColor:(id)arg2;

@end

