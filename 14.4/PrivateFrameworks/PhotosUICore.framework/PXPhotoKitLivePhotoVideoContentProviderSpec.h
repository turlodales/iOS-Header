//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@interface PXPhotoKitLivePhotoVideoContentProviderSpec : NSObject <NSCopying>
{
    _Bool _stabilizeIfPossible;
    CDStruct_1b6d18a9 _crossfadeDuration;
    CDStruct_1b6d18a9 _loopStartTime;
    CDStruct_e83c9415 _loopTimeRange;
}

@property(nonatomic) _Bool stabilizeIfPossible; // @synthesize stabilizeIfPossible=_stabilizeIfPossible;
@property(nonatomic) CDStruct_e83c9415 loopTimeRange; // @synthesize loopTimeRange=_loopTimeRange;
@property(nonatomic) CDStruct_1b6d18a9 loopStartTime; // @synthesize loopStartTime=_loopStartTime;
@property(nonatomic) CDStruct_1b6d18a9 crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

