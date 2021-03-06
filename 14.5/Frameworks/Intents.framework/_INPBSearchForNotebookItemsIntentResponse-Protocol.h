//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBNote, _INPBTask, _INPBTaskList;

@protocol _INPBSearchForNotebookItemsIntentResponse <NSObject>
+ (Class)tasksType;
+ (Class)taskListsType;
+ (Class)notesType;
@property(readonly, nonatomic) unsigned long long tasksCount;
@property(copy, nonatomic) NSArray *tasks;
@property(readonly, nonatomic) unsigned long long taskListsCount;
@property(copy, nonatomic) NSArray *taskLists;
@property(nonatomic) _Bool hasSortType;
@property(nonatomic) int sortType;
@property(readonly, nonatomic) unsigned long long notesCount;
@property(copy, nonatomic) NSArray *notes;
- (_INPBTask *)tasksAtIndex:(unsigned long long)arg1;
- (void)addTasks:(_INPBTask *)arg1;
- (void)clearTasks;
- (_INPBTaskList *)taskListsAtIndex:(unsigned long long)arg1;
- (void)addTaskLists:(_INPBTaskList *)arg1;
- (void)clearTaskLists;
- (int)StringAsSortType:(NSString *)arg1;
- (NSString *)sortTypeAsString:(int)arg1;
- (_INPBNote *)notesAtIndex:(unsigned long long)arg1;
- (void)addNotes:(_INPBNote *)arg1;
- (void)clearNotes;
@end

