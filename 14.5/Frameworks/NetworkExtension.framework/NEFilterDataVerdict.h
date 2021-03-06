//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEFilterVerdict.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@interface NEFilterDataVerdict : NEFilterVerdict <NSSecureCoding, NSCopying>
{
    long long _statisticsReportFrequency;
    unsigned long long _passBytes;
    unsigned long long _peekBytes;
}

+ (id)pauseVerdict;
+ (id)dataVerdictWithPassBytes:(unsigned long long)arg1 peekBytes:(unsigned long long)arg2;
+ (id)remediateVerdictWithRemediationURLMapKey:(id)arg1 remediationButtonTextMapKey:(id)arg2;
+ (id)dropVerdict;
+ (id)allowVerdict;
+ (id)needRulesVerdict;
+ (_Bool)supportsSecureCoding;
@property unsigned long long peekBytes; // @synthesize peekBytes=_peekBytes;
@property unsigned long long passBytes; // @synthesize passBytes=_passBytes;
@property long long statisticsReportFrequency; // @synthesize statisticsReportFrequency=_statisticsReportFrequency;
- (long long)filterAction;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

