//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSAbstractHandout.h>

#import <ClassKit/CLSRelationable-Protocol.h>

@class NSArray, NSString;

@interface CLSArchivedHandout : CLSAbstractHandout <CLSRelationable>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)relations;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSArray *attachments;
- (id)init;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

