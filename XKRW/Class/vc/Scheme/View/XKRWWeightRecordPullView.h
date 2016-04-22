//
//  XKRWWeightRecordPullView.h
//  XKRW
//
//  Created by ss on 16/4/6.
//  Copyright © 2016年 XiKang. All rights reserved.
//

@protocol XKRWWeightRecordPullViewDelegate <NSObject>
@optional
-(void)pressWeight;
-(void)pressContain;
-(void)pressGraph;

@end

#import <UIKit/UIKit.h>

@interface XKRWWeightRecordPullView : UIView
@property (weak, nonatomic) id<XKRWWeightRecordPullViewDelegate> delegate;
@property (weak, nonatomic) IBOutlet UIButton *btnWeight;
@property (weak, nonatomic) IBOutlet UIButton *btnContain;
@property (weak, nonatomic) IBOutlet UIButton *btnGraph;
@property (strong, nonatomic) IBOutlet UIView *childrenView;
@property (strong, nonatomic) IBOutlet UIImageView *imgArrow;
- (IBAction)actWeight:(id)sender;
- (IBAction)actContain:(id)sender;
- (IBAction)actGraph:(id)sender;


@end
