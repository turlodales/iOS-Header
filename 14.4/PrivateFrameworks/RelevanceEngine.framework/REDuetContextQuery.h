//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString, NSUUID, _CDContextualPredicate, _CDMDCSContextualPredicate;

@interface REDuetContextQuery : NSObject
{
    NSArray *_searchKeyPaths;
    CDUnknownBlockType _evalBlock;
    NSSet *_devices;
    NSUUID *_uuid;
    NSString *_name;
    _CDContextualPredicate *_predicate;
    _CDMDCSContextualPredicate *_remotePredicate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _CDMDCSContextualPredicate *remotePredicate; // @synthesize remotePredicate=_remotePredicate;
@property(readonly, nonatomic) _CDContextualPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSSet *devices; // @synthesize devices=_devices;
- (id)valueFromUserContext:(id)arg1;
- (id)_sortedKeyPaths:(id)arg1;
- (id)_localKeyPaths;
- (id)_keyPathsForDevice:(id)arg1;
- (id)createRegistrationsWithCallback:(CDUnknownBlockType)arg1;
- (id)_remoteRegistrationForDevice:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)_localRegistrationWithCallback:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSSet *keyPaths;
@property(readonly, nonatomic) NSString *registrationID;
- (id)initWithPredicate:(id)arg1 remotePredicate:(id)arg2 name:(id)arg3 evaluationBlock:(CDUnknownBlockType)arg4;

@end

