/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIAlertView;

@interface EKUIDeclineCommentController : NSObject {
    UIAlertView *_alertView;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

}

+ (id)_newDeclineCommentControllerWithCompletionBlock:(id)arg1;
+ (id)presentDeclineCommentAlertWithOrganizer:(id)arg1 currentComment:(id)arg2 completionBlock:(id)arg3;

- (void).cxx_destruct;
- (void)_completeWithButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)_presentAlertWithOrganizer:(id)arg1 currentComment:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
- (void)dismissAnimated:(BOOL)arg1;

@end
