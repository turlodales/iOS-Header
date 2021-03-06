//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventContentShared : TPSAnalyticsEvent
{
    NSString *_contentID;
    NSString *_collectionID;
    NSString *_shareMethod;
}

+ (id)eventWithContentID:(id)arg1 collectionID:(id)arg2 shareMethod:(id)arg3;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *shareMethod; // @synthesize shareMethod=_shareMethod;
@property(retain, nonatomic) NSString *collectionID; // @synthesize collectionID=_collectionID;
@property(retain, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
- (id)mutableAnalyticsEventRepresentation;
- (id)eventName;
- (void)encodeWithCoder:(id)arg1;
- (id)_initWithContentID:(id)arg1 collectionID:(id)arg2 shareMethod:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end

