//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMCameraClip, HMCameraClipFetchVideoAssetContextOperation, NSString;

@interface HFCameraClipVideoAssetOperationMarker : NSObject
{
    HFCameraClipVideoAssetOperationMarker *_previous;
    HFCameraClipVideoAssetOperationMarker *_next;
    HMCameraClipFetchVideoAssetContextOperation *_operation;
    NSString *_key;
    HMCameraClip *_clip;
}

+ (id)sentinelWithKey:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) HMCameraClip *clip; // @synthesize clip=_clip;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) __weak HMCameraClipFetchVideoAssetContextOperation *operation; // @synthesize operation=_operation;
@property(nonatomic) __weak HFCameraClipVideoAssetOperationMarker *next; // @synthesize next=_next;
@property(nonatomic) __weak HFCameraClipVideoAssetOperationMarker *previous; // @synthesize previous=_previous;
- (id)initWithCameraClip:(id)arg1 operation:(id)arg2 key:(id)arg3;

@end

