//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSEngagementAppResponseModel : NSObject
{
    NSDate *_created;
    NSDictionary *_definition;
}

+ (_Bool)_shouldEvictDefinition:(id)arg1 created:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *definition; // @synthesize definition=_definition;
@property(readonly, nonatomic) NSDate *created; // @synthesize created=_created;
- (_Bool)matchesEvent:(id)arg1;
@property(readonly, nonatomic) NSDictionary *responseData;
- (id)exportObject;
@property(readonly, nonatomic) NSString *cacheKey;
- (id)initWithData:(id)arg1 cacheInfo:(id)arg2;
- (id)initWithCacheObject:(id)arg1;

@end

