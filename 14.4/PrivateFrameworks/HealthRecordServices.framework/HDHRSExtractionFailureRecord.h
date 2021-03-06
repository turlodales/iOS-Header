//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthRecordServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface HDHRSExtractionFailureRecord : NSObject <NSSecureCoding>
{
    long long _failureCode;
    NSString *_propertyName;
    NSString *_resourceKeyPath;
}

+ (_Bool)supportsSecureCoding;
+ (id)extractionFailureRecordWithCode:(long long)arg1 propertyName:(id)arg2 resourceKeyPath:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *resourceKeyPath; // @synthesize resourceKeyPath=_resourceKeyPath;
@property(readonly, copy, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property(readonly, nonatomic) long long failureCode; // @synthesize failureCode=_failureCode;
- (id)description;
@property(readonly, copy, nonatomic) NSString *internalDisplaySafeDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

