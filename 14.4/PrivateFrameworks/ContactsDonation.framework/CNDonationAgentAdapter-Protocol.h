//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsDonation/NSObject-Protocol.h>

@class ACAccount, CNEither, CNFuture, NSArray, NSString;

@protocol CNDonationAgentAdapter <NSObject>
- (CNFuture *)removeAllRejections;
- (CNFuture *)rejectValuesWithClusterIdentifier:(NSString *)arg1;
- (CNFuture *)rejectValueWithDonationIdentifier:(NSString *)arg1;
- (CNFuture *)changeFromAccount:(ACAccount *)arg1 toAccount:(ACAccount *)arg2;
- (CNFuture *)meCardDonations;
- (CNEither *)donatedMeCardEither;
- (CNFuture *)fetchDonatedMeCard;
- (CNFuture *)removeDonatedMeCardValuesForIdentifiers:(NSArray *)arg1;
- (CNFuture *)donateMeCardValues:(NSArray *)arg1;
@end

