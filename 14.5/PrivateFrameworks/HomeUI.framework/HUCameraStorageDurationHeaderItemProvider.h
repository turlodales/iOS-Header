//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFStaticItemProvider.h>

@class NSSet;

@interface HUCameraStorageDurationHeaderItemProvider : HFStaticItemProvider
{
    unsigned long long _displayStyle;
    NSSet *_cameraProfiles;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
@property(readonly, nonatomic) unsigned long long displayStyle; // @synthesize displayStyle=_displayStyle;
- (id)invalidationReasons;
- (id)initWithItems:(id)arg1;
- (id)initWithCameraProfiles:(id)arg1 displayStyle:(unsigned long long)arg2;

@end

