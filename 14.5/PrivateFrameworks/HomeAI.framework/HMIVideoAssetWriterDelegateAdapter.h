//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMIVideoAssetWriterDelegate-Protocol.h>

@class NSString;

@interface HMIVideoAssetWriterDelegateAdapter : HMFObject <HMIVideoAssetWriterDelegate>
{
    CDUnknownBlockType _assetWriterDidOutputInitializationSegment;
    CDUnknownBlockType _assetWriterDidOutputSeparableSegment;
    CDUnknownBlockType _assetWriterDidFailWithError;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType assetWriterDidFailWithError; // @synthesize assetWriterDidFailWithError=_assetWriterDidFailWithError;
@property(copy) CDUnknownBlockType assetWriterDidOutputSeparableSegment; // @synthesize assetWriterDidOutputSeparableSegment=_assetWriterDidOutputSeparableSegment;
@property(copy) CDUnknownBlockType assetWriterDidOutputInitializationSegment; // @synthesize assetWriterDidOutputInitializationSegment=_assetWriterDidOutputInitializationSegment;
- (void)assetWriter:(id)arg1 didFailWithError:(id)arg2;
- (void)assetWriter:(id)arg1 didOutputSeparableSegment:(id)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (void)assetWriter:(id)arg1 didOutputInitializationSegment:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

