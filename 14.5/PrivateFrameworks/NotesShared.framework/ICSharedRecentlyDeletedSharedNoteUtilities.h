//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICSharedRecentlyDeletedSharedNoteUtilities : NSObject
{
}

+ (id)notesSharedViaICloudFromNotes:(id)arg1;
+ (unsigned long long)sharedNoteTypeForNotes:(id)arg1;
+ (id)messageForSharedNotesType:(unsigned long long)arg1;
+ (id)titleForSharedNotesType:(unsigned long long)arg1;
+ (void)showDeletingSharedNotesAlertWithType:(unsigned long long)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)showAlertsIfNecessaryForDeletingSharedNotes:(id)arg1 noteDeleteType:(unsigned long long)arg2 displayWindow:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

