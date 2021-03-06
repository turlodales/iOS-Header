//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, PHAsset, UIImage;

@interface PXLinkPresentationConfiguration : NSObject
{
    PHAsset *_keyAsset;
    unsigned long long _photoCount;
    unsigned long long _videoCount;
    unsigned long long _otherItemCount;
    NSDate *_earliestAssetDate;
    NSDate *_latestAssetDate;
    NSDate *_expirationDate;
    UIImage *_placeholderImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSDate *latestAssetDate; // @synthesize latestAssetDate=_latestAssetDate;
@property(copy, nonatomic) NSDate *earliestAssetDate; // @synthesize earliestAssetDate=_earliestAssetDate;
@property(nonatomic) unsigned long long otherItemCount; // @synthesize otherItemCount=_otherItemCount;
@property(nonatomic) unsigned long long videoCount; // @synthesize videoCount=_videoCount;
@property(nonatomic) unsigned long long photoCount; // @synthesize photoCount=_photoCount;
@property(retain, nonatomic) PHAsset *keyAsset; // @synthesize keyAsset=_keyAsset;
- (id)initWithKeyAsset:(id)arg1;

@end

