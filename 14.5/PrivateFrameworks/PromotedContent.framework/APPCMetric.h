//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PromotedContent/APPCMetricable-Protocol.h>

@class MISSING_TYPE, NSDate, NSDictionary, NSString;

@interface APPCMetric : NSObject <APPCMetricable>
{
    MISSING_TYPE *route;
    MISSING_TYPE *metric;
    MISSING_TYPE *timestamp;
    MISSING_TYPE *contentId;
    MISSING_TYPE *clientBundleIdentifier;
    MISSING_TYPE *deviceIdentifier;
    MISSING_TYPE *userIdentifier;
    MISSING_TYPE *properties;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSDictionary *properties;
@property(nonatomic, copy) NSString *userIdentifier;
@property(nonatomic, copy) NSString *deviceIdentifier;
@property(nonatomic, copy) NSString *clientBundleIdentifier;
@property(nonatomic, copy) NSString *contentId;
@property(nonatomic, copy) NSDate *timestamp;
@property(nonatomic) long long metric; // @synthesize metric;
@property(nonatomic) long long route; // @synthesize route;

@end

