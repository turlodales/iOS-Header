//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoAppRegistry/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, NSUUID;

@interface NARWorkspaceInfo : NSObject <NSSecureCoding>
{
    NSArray *_applications;
    NSUUID *_UUID;
    NSNumber *_sequenceNumber;
    NSArray *_standaloneGlances;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *standaloneGlances; // @synthesize standaloneGlances=_standaloneGlances;
@property(readonly, nonatomic) NSNumber *sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic) NSArray *applications; // @synthesize applications=_applications;
- (id)initWithApplications:(id)arg1 UUID:(id)arg2 sequenceNumber:(id)arg3 standaloneGlances:(id)arg4;
- (id)initWithApplications:(id)arg1 UUID:(id)arg2 sequenceNumber:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

