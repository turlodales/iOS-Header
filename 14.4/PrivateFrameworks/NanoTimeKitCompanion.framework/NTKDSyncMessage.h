//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>
#import <NanoTimeKitCompanion/SYChange-Protocol.h>

@class CLKComplicationDescriptor, NSData, NSNumber, NSString, NSUUID;

@interface NTKDSyncMessage : NSObject <SYChange, NSSecureCoding>
{
    NSUUID *_uuid;
    long long _messageType;
    NSUUID *_faceUUID;
    NSData *_payloadData;
    double _progress;
    NSString *_complicationClientID;
    CLKComplicationDescriptor *_complicationDescriptor;
    NSNumber *_complicationFamily;
}

+ (_Bool)supportsSecureCoding;
+ (id)messageOfType:(long long)arg1 withComplicationCliendId:(id)arg2 descriptor:(id)arg3 family:(id)arg4;
+ (id)messageOfType:(long long)arg1 withComplicationClientId:(id)arg2;
+ (id)messageOfType:(long long)arg1 withFaceUUID:(id)arg2;
+ (id)messageOfType:(long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *complicationFamily; // @synthesize complicationFamily=_complicationFamily;
@property(copy, nonatomic) CLKComplicationDescriptor *complicationDescriptor; // @synthesize complicationDescriptor=_complicationDescriptor;
@property(copy, nonatomic) NSString *complicationClientID; // @synthesize complicationClientID=_complicationClientID;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSData *payloadData; // @synthesize payloadData=_payloadData;
@property(retain, nonatomic) NSUUID *faceUUID; // @synthesize faceUUID=_faceUUID;
@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) long long changeType;
@property(readonly, nonatomic) NSString *sequencer;
@property(readonly, nonatomic) NSString *objectIdentifier;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

