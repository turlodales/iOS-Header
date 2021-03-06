//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, NSMutableArray, NSString, NoteContext;
@protocol OS_dispatch_queue;

@interface DALocalDBHelper : NSObject
{
    NSObject<OS_dispatch_queue> *_abDBQueue;
    NSObject<OS_dispatch_queue> *_calDBQueue;
    NSObject<OS_dispatch_queue> *_noteDBQueue;
    int _abConnectionCount;
    int _calConnectionCount;
    int _noteConnectionCount;
    void *_abDB;
    NSString *_familyDelegateAltDSID;
    NSString *_familyDelegateACAccountID;
    NSMutableArray *_saveRequests;
    CNContactStore *_contactStore;
    struct CalDatabase *_calDB;
    NSString *_clientIdentifier;
    NoteContext *_noteDB;
    CDUnknownBlockType _calUnitTestCallbackBlock;
}

+ (id)calTestCalDBDir;
+ (void)calSetTestCalDBDir:(id)arg1;
+ (id)abTestABDBDir;
+ (void)abSetTestABDBDir:(id)arg1;
+ (id)sharedInstanceForAccountType:(id)arg1 creatingClass:(Class)arg2;
+ (id)os_log;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType calUnitTestCallbackBlock; // @synthesize calUnitTestCallbackBlock=_calUnitTestCallbackBlock;
@property(nonatomic) int noteConnectionCount; // @synthesize noteConnectionCount=_noteConnectionCount;
@property(retain, nonatomic) NoteContext *noteDB; // @synthesize noteDB=_noteDB;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) int calConnectionCount; // @synthesize calConnectionCount=_calConnectionCount;
@property(nonatomic) struct CalDatabase *calDB; // @synthesize calDB=_calDB;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(nonatomic) int abConnectionCount; // @synthesize abConnectionCount=_abConnectionCount;
@property(retain, nonatomic) NSMutableArray *saveRequests; // @synthesize saveRequests=_saveRequests;
@property(retain, nonatomic) NSString *familyDelegateACAccountID; // @synthesize familyDelegateACAccountID=_familyDelegateACAccountID;
@property(retain, nonatomic) NSString *familyDelegateAltDSID; // @synthesize familyDelegateAltDSID=_familyDelegateAltDSID;
@property(nonatomic) void *abDB; // @synthesize abDB=_abDB;
- (void)calUnitTestsSetCallbackBlockForSave:(CDUnknownBlockType)arg1;
- (_Bool)noteCloseDBAndSave:(_Bool)arg1;
- (_Bool)noteSaveDB;
- (void)noteOpenDB;
- (_Bool)calCloseDBAndSave:(_Bool)arg1;
- (_Bool)calSaveDBAndFlushCaches;
- (_Bool)calSaveDB;
- (void)calClearSuperfluousChanges;
- (void)calOpenDBAsGenericClient;
- (void)calOpenDBWithClientIdentifier:(id)arg1;
- (_Bool)_calOpenDBWithClientIdentifier:(id)arg1;
- (void)_registerForCalendarYieldNotifications;
- (id)abDefaultAccountInfoSuitableForLogging;
- (id)abConstraintPlistPath;
- (_Bool)abCloseDBAndSave:(_Bool)arg1;
- (_Bool)abSaveDB;
- (void)abValidateDefaultSource;
- (void)abProcessAddedImages;
- (void)abProcessAddedRecords;
- (void)abOpenDBAsGenericClient;
- (void)abOpenDBWithClientIdentifier:(id)arg1;
- (_Bool)_abOpenDBWithClientIdentifier:(id)arg1;
- (void)_registerForAddressBookYieldNotifications;
- (_Bool)useContacts;
- (void)removeDelegateDatabasesNotMatchingAltDSIDs:(id)arg1;
- (void)executeAllSaveRequests;
- (void)addSaveRequest:(id)arg1;
- (void *)abDBThrowOnNil:(_Bool)arg1;
- (id)changeTrackingID;
- (void)dealloc;
- (id)initWithContactsFamilyDelegateAltDSID:(id)arg1 familyDelegateACAccountID:(id)arg2;
- (id)init;

@end

