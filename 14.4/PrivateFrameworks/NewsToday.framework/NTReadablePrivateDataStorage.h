//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTReadablePrivateDataStorage-Protocol.h>

@class FCFileCoordinatedTodayDropbox, FCFileCoordinatedTodayPrivateDataTransactionQueue, NSString;

@interface NTReadablePrivateDataStorage : NSObject <NTReadablePrivateDataStorage>
{
    FCFileCoordinatedTodayDropbox *_dropbox;
    FCFileCoordinatedTodayPrivateDataTransactionQueue *_transactionQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FCFileCoordinatedTodayPrivateDataTransactionQueue *transactionQueue; // @synthesize transactionQueue=_transactionQueue;
@property(retain, nonatomic) FCFileCoordinatedTodayDropbox *dropbox; // @synthesize dropbox=_dropbox;
- (void)readPrivateDataWithAccessor:(CDUnknownBlockType)arg1;
- (id)initWithDropbox:(id)arg1 transactionQueue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

