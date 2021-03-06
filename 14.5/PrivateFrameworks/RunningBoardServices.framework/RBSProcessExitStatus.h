//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/NSCopying-Protocol.h>
#import <RunningBoardServices/NSSecureCoding-Protocol.h>
#import <RunningBoardServices/RBSXPCSecureCoding-Protocol.h>

@class NSString;

@interface RBSProcessExitStatus : NSObject <RBSXPCSecureCoding, NSSecureCoding, NSCopying>
{
    unsigned int _domain;
    unsigned long long _code;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)supportsRBSXPCSecureCoding;
+ (id)statusWithDomain:(unsigned int)arg1 code:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long code; // @synthesize code=_code;
@property(readonly, nonatomic) unsigned int domain; // @synthesize domain=_domain;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_dictionaryRepresentation;
- (id)_initWithDictionaryRepresentation:(id)arg1;
- (_Bool)_isVoluntary;
- (id)error;
- (_Bool)isFairPlayFailure;
- (_Bool)isCrash;
- (_Bool)isSignal;
- (_Bool)isJetsam;
- (_Bool)isValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

