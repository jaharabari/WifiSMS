/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@class UIScrollAnimation, CalendarModel, CalendarDayBanner, CalendarDayGrid, CalendarDayAllDayView, CalendarDayOccurrenceView, UIScroller;



@interface CalendarDayView : UIView <CalendarView>
{
    CalendarDayBanner *_banner;
    CalendarDayAllDayView *_allDayView;
    CalendarDayOccurrenceView *_selectedOccurrenceView;
    UIScroller *_scroller;
    CalendarDayGrid *_grid;
    CalendarModel *_model;
    UIScrollAnimation *_scrollAnimation;
    double _dayStart;
    double _dayStartGMTOffset;
    double _dayEndGMTOffset;
    unsigned int _loadingOccurrences : 1;
    unsigned int _allowsOccurrenceSelection : 1;
    unsigned int _allowsDaySwitching : 1;
    unsigned int _putSelectionOnTop : 1;
}

+ (id)navigationTitleForModel:(id)arg1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setAllowsOccurrenceSelection:(BOOL)arg1;
- (void)setAllowsDaySwitching:(BOOL)arg1;
- (void)setShowsSelectionOnTop:(BOOL)arg1;
- (void)scrollToSecond:(NSInteger)arg1 animating:(BOOL)arg2;
- (void)scrollToAbsoluteSecond:(NSInteger)arg1;
- (void)_finishedScrollToSecond;
- (void)_selectedDateChanged:(id)arg1;
- (void)_occurrencesChanged:(id)arg1;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })_selectedDate;
- (void)calendarDayBanner:(id)arg1 arrowClicked:(NSInteger)arg2;
- (void)_handleOccurrenceViewClick:(id)arg1;
- (void)calendarDayOccurrenceViewClicked:(id)arg1;
- (void)calendarDayAllDayView:(id)arg1 occurrenceViewClicked:(id)arg2;
- (void)_selectedOccurrenceChanged:(id)arg1;
- (void)removeAllOccurrences;
- (void)filterInOccurrences:(id)arg1 animating:(BOOL)arg2;
- (void)setModel:(id)arg1;
- (void)cleanUp;
- (void)finishedTransitionIn;

@end
