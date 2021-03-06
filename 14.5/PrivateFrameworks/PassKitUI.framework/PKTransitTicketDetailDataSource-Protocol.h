//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSString;

@protocol PKTransitTicketDetailDataSource <NSObject>
- (NSString *)transitTicketDetailValueForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2;
- (NSString *)transitTicketDetailTitleForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2;
- (long long)transitTicketDetailNumberOfRowsForLeg:(unsigned long long)arg1;
- (NSString *)titleForLeg:(unsigned long long)arg1;
- (unsigned long long)numberOfLegs;
@end

