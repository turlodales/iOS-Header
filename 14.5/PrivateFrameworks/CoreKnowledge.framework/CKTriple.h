//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface CKTriple : NSObject
{
    MISSING_TYPE *value;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithSubject:(id)arg1 predicate:(id)arg2 object:(id)arg3 weight:(long long)arg4;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) long long hash;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) long long weight;
@property(nonatomic, readonly) NSString *object;
@property(nonatomic, readonly) NSString *predicate;
@property(nonatomic, readonly) NSString *subject;

@end

