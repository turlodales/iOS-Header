//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SharedWebCredentials/NSSecureCoding-Protocol.h>
#import <SharedWebCredentials/SWCRedactedDescription-Protocol.h>

@interface _SWCPatternList : NSObject <SWCRedactedDescription, NSSecureCoding>
{
    struct SWCPatternStorage _storage[0];
}

+ (_Bool)supportsSecureCoding;
+ (id)patternListWithArray:(id)arg1;
+ (id)patternListWithDetailsDictionary:(id)arg1 defaults:(id)arg2;
+ (id)patternListWithDetailsDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)redactedDescription;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_descriptionDebug:(_Bool)arg1 redacted:(_Bool)arg2;
- (unsigned long long)evaluateWithURLComponents:(id)arg1 substitutionVariables:(id)arg2 auditToken:(const CDStruct_6ad76789 *)arg3 matchingPattern:(id *)arg4 index:(unsigned long long *)arg5;
- (void)enumeratePatternsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly) unsigned long long count;

@end

