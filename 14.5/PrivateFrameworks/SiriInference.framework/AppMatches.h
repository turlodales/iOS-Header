//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface AppMatches : NSObject
{
    MISSING_TYPE *recommendation;
    MISSING_TYPE *bundleIds;
    MISSING_TYPE *signals;
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(void *)arg1;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSArray *bundleIds;
@property(nonatomic, readonly) long long recommendation; // @synthesize recommendation;

@end

