//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EBState.h>

@class ECColumnWidthConvertor, OABReaderState;

__attribute__((visibility("hidden")))
@interface EBReaderState : EBState
{
    struct XlBinaryReader *mXlReader;
    struct XlSheetInfoTable *mXlSheetInfoTable;
    ECColumnWidthConvertor *mColumnWidthConvertor;
    struct XlEshObjectFactory *mXlEshObjectFactory;
    OABReaderState *mOAState;
    _Bool mImportCSV;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool importCSV; // @synthesize importCSV=mImportCSV;
- (void)reportWarning:(id)arg1;
- (id)oaState;
- (id)columnWidthConvertor;
- (struct XlSheetInfoTable *)xlSheetInfoTable;
- (void)readGlobalXlObjects;
- (struct XlBinaryReader *)xlReader;
- (void)resumeReading;
- (void)pauseReading;
- (void)dealloc;
- (id)initWithXlReader:(struct XlBinaryReader *)arg1 cancelDelegate:(id)arg2;

@end

