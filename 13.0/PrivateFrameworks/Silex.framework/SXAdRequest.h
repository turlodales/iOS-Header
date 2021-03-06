//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SXAdRequest : NSObject
{
    _Bool _dynamicPlacement;
    NSString *_componentIdentifier;
    NSDictionary *_componentMetadata;
    unsigned long long _adType;
    NSDictionary *_campaignData;
    double _aspectRatioOfVideoPlayer;
    struct CGPoint _positionInArticle;
    struct CGSize _viewportSize;
    struct CGSize _contentSize;
}

@property(nonatomic) double aspectRatioOfVideoPlayer; // @synthesize aspectRatioOfVideoPlayer=_aspectRatioOfVideoPlayer;
@property(nonatomic) _Bool dynamicPlacement; // @synthesize dynamicPlacement=_dynamicPlacement;
@property(retain, nonatomic) NSDictionary *campaignData; // @synthesize campaignData=_campaignData;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct CGSize viewportSize; // @synthesize viewportSize=_viewportSize;
@property(nonatomic) unsigned long long adType; // @synthesize adType=_adType;
@property(nonatomic) struct CGPoint positionInArticle; // @synthesize positionInArticle=_positionInArticle;
@property(retain, nonatomic) NSDictionary *componentMetadata; // @synthesize componentMetadata=_componentMetadata;
@property(retain, nonatomic) NSString *componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
- (void).cxx_destruct;

@end

