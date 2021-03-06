//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/NSObject-Protocol.h>

@class NSDate, NSDictionary, NSString;
@protocol PXDisplayAssetFetchResult;

@protocol PXDisplaySuggestion <NSObject, NSCopying>
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) NSDictionary *actionProperties;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) unsigned short subtype;
@property(readonly, nonatomic) unsigned short type;
@property(readonly, nonatomic) unsigned short state;
- (id <PXDisplayAssetFetchResult>)fetchKeyAssets;
@end

