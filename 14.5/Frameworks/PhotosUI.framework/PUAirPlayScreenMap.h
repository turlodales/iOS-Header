//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface PUAirPlayScreenMap : NSObject
{
    NSMapTable *_screens;
}

- (void).cxx_destruct;
- (unsigned long long)airPlayScreensCount;
- (id)allAirPlayScreens;
- (id)airPlayScreenForScreen:(id)arg1;
- (void)removeAirPlayScreen:(id)arg1;
- (void)addDetectedAirPlayScreen:(id)arg1;
- (id)init;

@end

