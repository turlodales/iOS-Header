//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCModelGenericAVItemAssetLoadProperties;

@interface MPCModelGenericAVItemHomeSharingLoadOperation : MPAsyncOperation
{
    MPCModelGenericAVItemAssetLoadProperties *_assetLoadProperties;
    CDUnknownBlockType _responseHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties; // @synthesize assetLoadProperties=_assetLoadProperties;
- (void)execute;

@end

