//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreComponents/NSCopying-Protocol.h>
#import <AppStoreComponents/NSSecureCoding-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface ASCMetricsData : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _shouldFlush;
    NSString *_topic;
    NSDictionary *_fields;
    NSSet *_includingFields;
    NSSet *_excludingFields;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *excludingFields; // @synthesize excludingFields=_excludingFields;
@property(readonly, copy, nonatomic) NSSet *includingFields; // @synthesize includingFields=_includingFields;
@property(readonly, copy, nonatomic) NSDictionary *fields; // @synthesize fields=_fields;
@property(readonly, nonatomic) _Bool shouldFlush; // @synthesize shouldFlush=_shouldFlush;
@property(readonly, copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (id)metricsDataByMergingFields:(id)arg1 uniquingFieldsWithBlock:(CDUnknownBlockType)arg2;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopic:(id)arg1 shouldFlush:(_Bool)arg2 fields:(id)arg3 includingFields:(id)arg4 excludingFields:(id)arg5;

@end

