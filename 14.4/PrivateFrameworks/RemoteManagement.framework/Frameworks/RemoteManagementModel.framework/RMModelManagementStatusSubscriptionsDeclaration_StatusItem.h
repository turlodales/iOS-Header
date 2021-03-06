//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSArray, NSString;

@interface RMModelManagementStatusSubscriptionsDeclaration_StatusItem : RMModelPayloadBase
{
    NSString *_payloadName;
    NSArray *_payloadProperties;
    NSString *_payloadPredicate;
}

+ (id)buildRequiredOnlyWithName:(id)arg1;
+ (id)buildWithName:(id)arg1 properties:(id)arg2 predicate:(id)arg3;
+ (id)allowedPayloadKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *payloadPredicate; // @synthesize payloadPredicate=_payloadPredicate;
@property(copy, nonatomic) NSArray *payloadProperties; // @synthesize payloadProperties=_payloadProperties;
@property(copy, nonatomic) NSString *payloadName; // @synthesize payloadName=_payloadName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithType:(short)arg1;
- (_Bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;

@end

