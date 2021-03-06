//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenTimeCore/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSUUID;

@interface STAskForTimeResponse : NSObject <NSSecureCoding>
{
    NSUUID *_associatedRequestIdentifier;
    long long _answer;
    NSNumber *_respondingUserDSID;
    NSNumber *_amountGranted;
    NSDate *_timeStamp;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSNumber *amountGranted; // @synthesize amountGranted=_amountGranted;
@property(retain, nonatomic) NSNumber *respondingUserDSID; // @synthesize respondingUserDSID=_respondingUserDSID;
@property(nonatomic) long long answer; // @synthesize answer=_answer;
@property(retain, nonatomic) NSUUID *associatedRequestIdentifier; // @synthesize associatedRequestIdentifier=_associatedRequestIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *payload;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithPayload:(id)arg1;

@end

