//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SinfsArray;

@interface DownloadDRM : NSObject
{
    NSArray *_sinfs;
    _Bool _DRMFree;
}

- (void).cxx_destruct;
@property(readonly, getter=isDRMFree) _Bool DRMFree; // @synthesize DRMFree=_DRMFree;
- (id)_sinfsArrayWithDataKey:(id)arg1;
@property(readonly) SinfsArray *sinfsArray;
@property(readonly) NSArray *sinfs; // @synthesize sinfs=_sinfs;
- (id)sinfForIdentifier:(long long)arg1;
@property(readonly) SinfsArray *pinfsArray;
- (id)firstDataForSinfDataKey:(id)arg1;
- (id)initWithSinfArray:(id)arg1;
- (id)initWithSinfData:(id)arg1;
- (id)init;

@end

