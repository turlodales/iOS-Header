//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CertInfo/NSObject-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol CertInfoTrustDescription <NSObject>
- (NSDate *)certificateExpirationDateAtIndex:(unsigned long long)arg1;
- (NSString *)certificateIssuerSummaryAtIndex:(unsigned long long)arg1;
- (NSString *)certificateSubjectSummaryAtIndex:(unsigned long long)arg1;
- (NSArray *)certificatePropertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)certificateCount;
- (NSArray *)summaryDescriptionItems;
- (_Bool)isRootCertificate;
- (_Bool)isTrusted;
- (NSString *)summarySubtitle;
- (NSString *)summaryTitle;
@end

