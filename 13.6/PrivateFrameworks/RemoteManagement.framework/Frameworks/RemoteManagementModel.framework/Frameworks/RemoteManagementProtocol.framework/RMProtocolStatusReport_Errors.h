//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSArray, NSString;

@interface RMProtocolStatusReport_Errors : RMModelPayloadBase
{
    NSString *_reportStatusItem;
    NSArray *_reportReasons;
}

+ (id)buildRequiredOnlyWithStatusItem:(id)arg1;
+ (id)buildWithStatusItem:(id)arg1 reasons:(id)arg2;
+ (id)allowedReportKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *reportReasons; // @synthesize reportReasons=_reportReasons;
@property(copy, nonatomic) NSString *reportStatusItem; // @synthesize reportStatusItem=_reportStatusItem;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithType:(short)arg1;
- (_Bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;

@end

