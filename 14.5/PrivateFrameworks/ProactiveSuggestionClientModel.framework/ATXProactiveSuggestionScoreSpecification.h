//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveSuggestionClientModel/ATXProtoBufWrapper-Protocol.h>
#import <ProactiveSuggestionClientModel/NSCopying-Protocol.h>
#import <ProactiveSuggestionClientModel/NSSecureCoding-Protocol.h>

@interface ATXProactiveSuggestionScoreSpecification : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>
{
    double _rawScore;
    long long _suggestedConfidenceCategory;
}

+ (_Bool)supportsSecureCoding;
+ (id)stringForSuggestedConfidenceCategory:(long long)arg1;
@property(nonatomic) long long suggestedConfidenceCategory; // @synthesize suggestedConfidenceCategory=_suggestedConfidenceCategory;
@property(nonatomic) double rawScore; // @synthesize rawScore=_rawScore;
- (id)jsonRawData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (_Bool)checkAndReportDecodingFailureIfNeededFordouble:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)proto;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)encodeAsProto;
- (_Bool)fuzzyIsEqualToScoreSpecification:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithRawScore:(double)arg1 suggestedConfidenceCategory:(long long)arg2;
- (id)init;

@end

