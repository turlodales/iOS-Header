//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeed/TSProcessedImageRequestType-Protocol.h>

@class MISSING_TYPE, NSDictionary, NSString;

@interface NEThumbnailProcessorRequest : NSObject <TSProcessedImageRequestType>
{
    MISSING_TYPE *assetHandles;
    MISSING_TYPE *thumbnailFrame;
    MISSING_TYPE *focalFrame;
    MISSING_TYPE *scale;
    MISSING_TYPE *roundedCorners;
    MISSING_TYPE *cornerRadius;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *cacheIdentifier;
- (id)initWithThumbnailAssetHandle:(id)arg1 thumbnailFrame:(struct CGRect)arg2 focalFrame:(struct CGRect)arg3 scale:(double)arg4 byRoundingCorners:(unsigned long long)arg5 cornerRadius:(double)arg6;
@property(nonatomic, readonly) NSDictionary *assetHandles;

@end

