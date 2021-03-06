//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

@class NSSet, NSString;

@interface HUCameraUsageOptionItem : HFItem
{
    _Bool _updateInProgress;
    unsigned long long _presence;
    unsigned long long _usage;
    unsigned long long _sortOrder;
    NSSet *_cameraProfiles;
}

+ (unsigned long long)sortOrderForUsage:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool updateInProgress; // @synthesize updateInProgress=_updateInProgress;
@property(readonly, copy, nonatomic) NSSet *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
@property(readonly, nonatomic) unsigned long long sortOrder; // @synthesize sortOrder=_sortOrder;
@property(readonly, nonatomic) unsigned long long usage; // @synthesize usage=_usage;
@property(readonly, nonatomic) unsigned long long presence; // @synthesize presence=_presence;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) NSString *privacyDescription;
- (id)initWithPresence:(unsigned long long)arg1 cameraUsage:(unsigned long long)arg2 cameraProfiles:(id)arg3;

@end

