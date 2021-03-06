//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TIMecabraCandidate.h>

@class NSString;

@interface TILiveConversionCandidate : TIMecabraCandidate
{
    NSString *_candidate;
    _Bool _inlineCandidate;
    _Bool _partialCandidate;
}

+ (_Bool)supportsSecureCoding;
+ (int)type;
- (void).cxx_destruct;
@property(nonatomic, getter=isPartialCandidate) _Bool partialCandidate; // @synthesize partialCandidate=_partialCandidate;
@property(nonatomic, getter=isInlineCandidate) _Bool inlineCandidate; // @synthesize inlineCandidate=_inlineCandidate;
- (id)candidate;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)label;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSurface:(id)arg1 input:(id)arg2 candidate:(id)arg3 mecabraCandidatePointerValue:(id)arg4;

@end

