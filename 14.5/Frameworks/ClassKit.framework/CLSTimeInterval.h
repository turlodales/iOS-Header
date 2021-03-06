//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSObject.h>

#import <ClassKit/CLSRelationable-Protocol.h>

@class NSDate, NSString;

@interface CLSTimeInterval : CLSObject <CLSRelationable>
{
    NSDate *_startTime;
    double _length;
}

+ (_Bool)supportsSecureCoding;
+ (id)relations;
- (void).cxx_destruct;
@property(nonatomic) double length; // @synthesize length=_length;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

